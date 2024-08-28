/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chaker_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:41:04 by vguidoni          #+#    #+#             */
/*   Updated: 2023/03/02 14:41:08 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_rotate_ck(t_swap **swap)
{
	t_swap	*tmp;
	t_swap	*tail;

	tmp = *swap;
	*swap = (*swap)->next;
	tail = ottieni_min_stack(*swap);
	tmp->next = NULL;
	tail->next = tmp;
}

void	ft_rotate_a_ck(t_swap **swap)
{
	ft_rotate_ck(swap);
}

void	ft_rotate_b_ck(t_swap **sawp)
{
	ft_rotate_ck(sawp);
}

void	ft_rotate_rr_ck(t_swap **swap_a, t_swap **swap_b)
{
	ft_rotate_ck(swap_a);
	ft_rotate_ck(swap_b);
}
