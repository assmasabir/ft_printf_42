/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabir <asabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 01:28:29 by asabir            #+#    #+#             */
/*   Updated: 2023/12/25 13:53:04 by asabir           ###   ########.fr       */
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
			if (*format == 'd' || *format == 'i')
			{
				len += ft_putnbr(va_arg(args, int));
			}
			else if (*format == 's')
			{
				len += ft_putstr(va_arg(args, char *));
			}
			else if (*format == 'c') 
        len += ft_putchar(va_arg(args, int));
			else if (*format == 'u')
        len += ft_putnbr_unsigned(va_arg(args, unsigned int));
			else if (*format == 'X')
        len += ft_hexamj(va_arg(args,unsigned int));
        else if (*format == 'x')
        len += ft_hexamn(va_arg(args,unsigned int));
      else if (*format == '%')
        len += ft_printpercent();
      else if (*format == 'p')
		{
	  	len += ft_putstr("0x");
		len += ft_hexamn(va_arg(args, unsigned int));
		}
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(args);
  return (len);
}
#include <stdio.h>

// int main()
// {
  
//     int num = 42;
//     char *str = "Hello, world!";
//     char ch = 'A';
//     unsigned int unsignedNum = 123;
//     unsigned int hexNum = 255;


//     ft_printf("Testing ft_printf:\n");
//     ft_printf("Integer: %d\n", num);
//     ft_printf("String: %s\n", str);
//     ft_printf("Character: %c\n", ch);
//     ft_printf("Unsigned Integer: %u\n", unsignedNum);
//     ft_printf("Hexadecimal: %X\n", hexNum);
//     ft_printf("Percentage: %%\n");

//     return 0;
// }

