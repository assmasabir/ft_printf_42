/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabir <asabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 01:28:29 by asabir            #+#    #+#             */
/*   Updated: 2023/12/23 18:51:27 by asabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
  int len;
  
  len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' && *format == 'i')
			{
				len += ft_putnbr(va_arg(args, int));
			}
			else if (*format == 's')
			{
				len += ft_putstr(va_arg(args, char *));
			}
			else if (*format == 'c') 
        len += ft_putchar(va_arg(args, char));
			else if (*format == 'u')
        len += ft_putnbr_unsigned(va_arg(args, unsigned int));
			else if (*format == 'X')
        len += ft_hexa(va_arg(args,unsigned int));
      else if (*format == 'x')
        len += ft_hexa(va_arg(args,unsigned int));
      else if (*format == '%')
        len =+ ft_printpercent();
      else if (*format == 'p')
		{
	  	len += ft_putstr("0x");
		len += ft_hexa(va_arg(args, unsigned int));
		}
		}
		else
		{
			putchar(*format);
      	len++;
		}
		format++;
	}
	va_end(args);
  return (len);
}

