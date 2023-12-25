/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabir <asabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 01:28:29 by asabir            #+#    #+#             */
/*   Updated: 2023/12/25 18:51:40 by asabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_format_specifier(char specifier, va_list args, int *len)
{
	if (specifier == 'd' || specifier == 'i')
		*len += ft_putnbr(va_arg(args, int));
	else if (specifier == 's')
		*len += ft_putstr(va_arg(args, char *));
	else if (specifier == 'c')
		*len += ft_putchar(va_arg(args, int));
	else if (specifier == 'u')
		*len += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (specifier == 'X')
		*len += ft_hexamj(va_arg(args, unsigned int));
	else if (specifier == 'x')
		*len += ft_hexamn(va_arg(args, unsigned int));
	else if (specifier == '%')
		*len += ft_printpercent();
	else if (specifier == 'p')
	{
		*len += ft_putstr("0x");
		*len += ft_hexamn(va_arg(args, unsigned long long));
	}
	else
		return (0);
	return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (!handle_format_specifier(*format, args, &len))
			{
				len += ft_putchar('%');
				len += ft_putchar(*format);
			}
		}
		else
		{
			len += ft_putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (len);
}
