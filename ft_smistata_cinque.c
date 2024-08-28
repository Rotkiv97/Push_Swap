/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smistata_cinque.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:43:27 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/27 15:43:30 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_v(t_swap **swap_a)
{
	(*swap_a)->a = (*swap_a)->val;
	(*swap_a)->b = (*swap_a)->next->val;
	(*swap_a)->c = (*swap_a)->next->next->val;
}

void	ft_v_1(t_swap**swap_a)
{
	(*swap_a)->d = (*swap_a)->next->next->next->val;
	(*swap_a)->e = (*swap_a)->next->next->next->next->val;
}

void	ft_min_cinque(t_swap **swap_a)
{
	ft_v(swap_a);
	ft_v_1(swap_a);
	ft_controllo_smistata(*swap_a);
	if ((*swap_a)->e < (*swap_a)->c && (*swap_a)->e < (*swap_a)->d
		&& (*swap_a)->e < (*swap_a)->b && (*swap_a)->e < (*swap_a)->a)
		ft_reverse_rotate_a(swap_a);
	else if ((*swap_a)->d < (*swap_a)->e && (*swap_a)->d < (*swap_a)->a
		&& (*swap_a)->d < (*swap_a)->b && (*swap_a)->d < (*swap_a)->c)
	{
		ft_reverse_rotate_a(swap_a);
		ft_reverse_rotate_a(swap_a);
	}
	else if ((*swap_a)->c < (*swap_a)->a && (*swap_a)->c < (*swap_a)->b
		&& (*swap_a)->c < (*swap_a)->d && (*swap_a)->c < (*swap_a)->e)
	{
		ft_rotate_a(swap_a);
		ft_rotate_a(swap_a);
	}
	else if ((*swap_a)->b < (*swap_a)->a && (*swap_a)->b < (*swap_a)->c
		&& (*swap_a)->b < (*swap_a)->d && (*swap_a)->b < (*swap_a)->e)
		ft_rotate_a(swap_a);
	if (ft_controllo_smistata(*swap_a))
		return ;
}

void	ft_smistata_cinque(t_swap **swap_a, t_swap **swap_b)
{
	if (ft_controllo_smistata(*swap_a))
		return ;
	ft_min_cinque(swap_a);
	ft_push_b(swap_a, swap_b);
	ft_smistata_quatro(swap_a, swap_b);
	ft_push_a(swap_a, swap_b);
}
