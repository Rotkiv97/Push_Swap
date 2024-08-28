/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:07:11 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/21 14:07:18 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdint.h>
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int		ft_putstriu(char *s);
void	ft_putchar_fd(char c, int fd);
int		ft_intlen(int nb, char c);
int		ft_hexsa(uintptr_t x);
int		ft_printf(const char *format, ...);
void	ft_putchar(int c);
int		ft_lowercase(unsigned int x);
int		ft_uppercase(unsigned int x);
int		ft_putint(int y);
int		ft_strlen(char *s);
void	ft_putstr(char *s);
int		ft_printi(int k);
int		ft_putnbr(long int nb);
int		ft_unint(unsigned int k);
int		ft_ricercha_arg( va_list list, const char *format);
int		ft_lettura(const char *format, char p);
int		ft_p(uintptr_t l);
int		ft_printip(int k);
int		ft_printl(char c);

#endif
