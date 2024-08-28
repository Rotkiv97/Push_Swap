/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:33:01 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/20 17:33:08 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexsa(uintptr_t x)
{
	uintptr_t	k[100];
	long int	y;
	int			l;

	l = 0;
	y = 0;
	if (x == 0)
		l += ft_printl('0');
	while (x > 0)
	{
		k[y] = "0123456789abcdef"[x % 16];
		x /= 16;
		y++;
		l++;
	}
	y--;
	while (y >= 0)
	{
		ft_putchar(k[y]);
		y--;
	}
	return (l);
}

int	ft_p(uintptr_t l)
{
	int	y;

	y = 0;
	if (l == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	y += write(1, "0x", 2);
	y += ft_hexsa(l);
	return (y);
}
