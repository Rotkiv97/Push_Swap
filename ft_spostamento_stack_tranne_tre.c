/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spostamento_stack_tranne_tre.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:07:57 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/27 17:07:59 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_spostamento_stack_tranne_tre(t_swap **swap_a, t_swap **swap_b)
{	
	int	size;
	int	push;
	int	i;

	size = ft_grandezza_stack(*swap_a);
	push = 0;
	i = 0;
	while (size > 6 && i < size && push < size / 2)
	{
		if ((*swap_a)->index <= size / 2)
		{
			ft_push_b(swap_a, swap_b);
			push++;
		}
		else
			ft_rotate_a(swap_a);
		i++;
	}
	while (size - push > 3)
	{
		ft_push_b(swap_a, swap_b);
		push++;
	}
}
