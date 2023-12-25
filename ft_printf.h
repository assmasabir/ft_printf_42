/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabir <asabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 01:28:21 by asabir            #+#    #+#             */
/*   Updated: 2023/12/25 18:20:30 by asabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int				ft_printf(const char *format, ...);
int				ft_putstr(char *str);
int				ft_putchar(char c);
int				ft_putnbr(int nb);
int				ft_putnbr_unsigned(unsigned int nb);
unsigned int	ft_size(int nb);
unsigned int	ft_size_unsigned(unsigned int nb);
int				ft_printpercent(void);
int				ft_hexamn(unsigned long long nb);
int				ft_hexamj(unsigned int nb);

#endif