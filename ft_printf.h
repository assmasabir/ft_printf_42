/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabir <asabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 01:28:21 by asabir            #+#    #+#             */
/*   Updated: 2023/12/24 22:40:17 by asabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putnbr_unsigned(int nb);
unsigned int	ft_size(int nb);
int	ft_printpercent(void);
int ft_hexamn(unsigned int nb);
int ft_hexamj(unsigned int nb);
