/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smistata_100_4.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:12:17 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/27 11:12:20 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_gest_a(int a, t_swap **swap_a)
{
	while (a < 0)
	{
		ft_reverse_rotate_a(swap_a);
		a++;
	}
	while (a > 0)
	{
		ft_rotate_a(swap_a);
		a--;
	}
}

void	ft_gest_rrr(int c, t_swap **swap_a, t_swap **swap_b)
{
	while (c < 0)
	{
		ft_reverse_rotate_rrr(swap_a, swap_b);
		c++;
	}
}

void	ft_gest_rr( int c, t_swap **swap_a, t_swap **swap_b)
{
	while (c > 0)
	{
		ft_rotate_rr(swap_a, swap_b);
		c--;
	}
}

void	ft_app_mosse(int a, int b, t_swap **swap_a, t_swap **swap_b)
{
	if ((a < 0 && b > 0) || (a > 0 && b < 0) || (a == 0 || b == 0))
	{
		ft_gest_b(b, swap_b);
		ft_gest_a(a, swap_a);
	}
	if ((a < 0 && b < 0) && a <= b)
	{
		ft_gest_rrr(b, swap_a, swap_b);
		ft_gest_a(a - b, swap_a);
	}
	if ((a > 0 && b > 0) && a >= b)
	{
		ft_gest_rr(b, swap_a, swap_b);
		ft_gest_a(a - b, swap_a);
	}
	if ((a > 0 && b > 0) && a < b)
	{
		ft_gest_rr(a, swap_a, swap_b);
		ft_gest_b(b - a, swap_b);
	}
	if ((a < 0 && b < 0) && a > b)
	{
		ft_gest_rrr(a, swap_a, swap_b);
		ft_gest_b(b - a, swap_b);
	}
}

void	ft_fin(t_swap **swap_a, t_swap **swap_b, int *move_a, int *move_b)
{
	int	*b;
	int	size_b;
	int	tmp;
	int	*arr_c;

	size_b = ft_grandezza_stack(*swap_b);
	b = ft_utilis_lis(swap_b, size_b, move_b);
	arr_c = ft_scelta_mosse(move_a, move_b, size_b, b);
	size_b = ft_grandezza_stack(*swap_b);
	tmp = ft_min_arr_c(arr_c, size_b);
	ft_app_mosse(move_a[tmp], move_b[tmp], swap_a, swap_b);
	ft_push_a(swap_a, swap_b);
	free(arr_c);
}
