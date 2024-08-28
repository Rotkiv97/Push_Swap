/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:04:12 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/27 11:04:14 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_rotate(t_swap **swap)
{
	t_swap	*tmp;
	t_swap	*coda;

	tmp = *swap;
	*swap = (*swap)->next;
	coda = ottieni_min_stack(*swap);
	tmp->next = NULL;
	coda->next = tmp;
}

void	ft_rotate_a(t_swap **swap)
{
	ft_rotate(swap);
	ft_printf("ra\n");
}

void	ft_rotate_b(t_swap **sawp)
{
	ft_rotate(sawp);
	ft_printf("rb\n");
}

void	ft_rotate_rr(t_swap **swap_a, t_swap **swap_b)
{
	ft_rotate(swap_a);
	ft_rotate(swap_b);
	ft_printf("rr\n");
}
