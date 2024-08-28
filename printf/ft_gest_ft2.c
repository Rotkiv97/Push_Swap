/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gest_ft2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:31:25 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/18 16:31:46 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putint(int y)
{
	if (y != 0)
		write(1, &y, 1);
	return (1);
}

int	ft_printi(int k)
{
	int	y;

	y = 0;
	ft_putnbr(k);
	if (k < 0)
		y++;
	if (k == 0)
		y++;
	while (k != 0)
	{
		k = (k / 10);
		y++;
	}
	return (y);
}

int	ft_putnbr(long int nb)
{
	int	y;

	y = 0;
	if (nb == -2147483648)
	{
		y += write(1, "-", 1);
		y += write(1, "2", 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		y += write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb < 10)
		y += ft_putint((nb % 10) + 48);
	else
	{
		y += ft_putnbr(nb / 10);
		y += ft_putint((nb % 10) + 48);
	}
	return (y);
}

int	ft_unint(unsigned int k)
{
	int	y;

	y = 0;
	ft_putnbr(k);
	if (k == 0)
		y++;
	while (k != 0)
	{
		k = (k / 10);
		y++;
	}
	return (y);
}
