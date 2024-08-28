/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:30:02 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/27 15:30:40 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_tab_a(int *mos, int i, int *move_b, int *move_a)
{
	int	neg_b;

	neg_b = 0;
	if (move_a[i] >= 0 && move_b[i] >= 0)
	{
		if (move_a[i] > move_b[i] || move_a[i] == move_b[i])
			mos[i] = move_a[i];
		else if (move_a[i] < move_b[i])
			mos[i] = move_b[i];
	}
	else if (move_a[i] >= 0 && move_b[i] < 0)
	{
		neg_b = move_b[i] * -1;
		mos[i] = neg_b + move_a[i];
	}
}

void	ft_tab_b(int *mos, int i, int *move_b, int *move_a)
{
	int	neg_a;
	int	neg_b;

	neg_a = 0;
	neg_b = 0;
	if (move_a[i] < 0 && move_b[i] >= 0)
	{
		neg_a = move_a[i] * -1;
		mos[i] = neg_a + move_b[i];
	}
	else if (move_a[i] < 0 && move_b[i] < 0)
	{
		neg_a = move_a[i] * -1;
		neg_b = move_b[i] * -1;
		if (neg_a < neg_b || neg_a == neg_b)
			mos[i] = neg_b;
		else if (neg_a > neg_b)
			mos[i] = neg_a;
	}
}

void	ft_tab_t(int *mos, int i, int *move_b, int *move_a)
{
	ft_tab_a(mos, i, move_b, move_a);
	ft_tab_b(mos, i, move_b, move_a);
}
