/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_outils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabir <asabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 22:33:51 by asabir            #+#    #+#             */
/*   Updated: 2023/12/25 14:25:17 by asabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexamn(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb > 16)
	{
		len += ft_hexamn(nb / 16);
		len += ft_hexamn(nb % 16);
	}
	else
	{
		ft_putchar("0123456789abcdef"[nb]);
		len++;
	}
	return (len);
}

int	ft_hexamj(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb > 16)
	{
		len += ft_hexamj(nb / 16);
		len += ft_hexamj(nb % 16);
	}
	else
	{
		ft_putchar("0123456789ABCDEF"[nb]);
		len++;
	}
	return (len);
}

int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
		len++;
	}
	return (len);
}
