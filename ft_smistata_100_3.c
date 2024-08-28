/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smistata_100_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:12:00 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/27 11:12:03 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_tabella(int *move_a, int *move_b, int size_b)
{
	int	i;
	int	*mos;

	i = 0;
	mos = (int *)malloc(sizeof(int) * size_b);
	while (i < size_b)
	{
		ft_tab_t(mos, i, move_b, move_a);
		i++;
	}
	return (mos);
}

int	*ft_scelta_mosse(int *move_a, int *move_b, int size_b, int *stack_b)
{
	int	*mos;

	move_b = ft_gest_nbr_b(move_b, size_b, stack_b);
	mos = ft_tabella(move_a, move_b, size_b);
	return (mos);
}

int	ft_min_arr_c(int *arr_c, int size_b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size_b)
	{
		if (arr_c[i] < arr_c[j])
			j = i;
		i++;
	}
	return (j);
}

void	ft_gest_b(int b, t_swap **swap_b)
{
	while (b < 0)
	{
		ft_reverse_rotate_b(swap_b);
		b++;
	}
	while (b > 0)
	{
		ft_rotate_b(swap_b);
		b--;
	}
}
