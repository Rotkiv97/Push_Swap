/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  vguidoni <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:51:50 by  vguidoni         #+#    #+#             */
/*   Updated: 2022/10/17 15:52:04 by  vguidoni        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		c;
	va_list	list;

	va_start (list, format);
	c = 0;
	while (*format)
	{
		if (*format == '%')
		{
			c += ft_ricercha_arg(list, format + 1);
			format = format + 2;
		}
		else
		{
			c += ft_lettura(format, *format);
			format++;
		}
		if (format == NULL)
			return (c);
	}
	va_end(list);
	return (c);
}
