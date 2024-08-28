/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gest_ft3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:01:36 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/19 17:01:55 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printl(char c)
{
	ft_putchar(c);
	return (1);
}

int	ft_lowercase(unsigned int x)
{
	char		k[100];
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

int	ft_uppercase(unsigned int x)
{
	char		k[100];
	long int	y;
	int			l;

	l = 0;
	y = 0;
	if (x == 0)
		l += ft_printl('0');
	while (x > 0)
	{
		k[y] = "0123456789ABCDEF"[x % 16];
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
