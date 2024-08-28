/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ricercha_arg.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:48:16 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/18 12:48:36 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ricercha_arg(va_list list, const char *format)
{
	int	k;

	k = 0;
	if (*format == 'c')
		k = ft_lettura(format, (char)va_arg(list, int));
	if (*format == 's')
		k = ft_putstriu(va_arg(list, char *));
	if (*format == 'p')
		k = ft_p(va_arg(list, uintptr_t));
	if (*format == 'd')
		k = ft_putnbr(va_arg(list, int));
	if (*format == 'i')
		k = ft_printi(va_arg(list, int));
	if (*format == 'u')
		k = ft_unint(va_arg(list, unsigned int));
	if (*format == 'x')
		k = ft_lowercase(va_arg(list, int));
	if (*format == 'X')
		k = ft_uppercase(va_arg(list, int));
	if (*format == '%')
		k = ft_lettura(format, '%');
	return (k);
}
