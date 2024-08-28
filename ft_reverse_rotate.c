/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:02:11 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/27 11:02:14 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_reverse_rotate(t_swap **swap)
{
	t_swap	*coda;
	t_swap	*prima;

	prima = (*swap);
	coda = ottieni_min_stack(*swap);
	while (prima->next != coda)
		prima = prima->next;
	prima->next = NULL;
	coda->next = (*swap);
	(*swap) = coda;
}

void	ft_reverse_rotate_a(t_swap **swap)
{
	ft_reverse_rotate(swap);
	ft_printf("rra\n");
}

void	ft_reverse_rotate_b(t_swap **swap)
{
	ft_reverse_rotate(swap);
	ft_printf("rrb\n");
}

void	ft_reverse_rotate_rrr(t_swap **swap_a, t_swap **swap_b)
{
	ft_reverse_rotate(swap_a);
	ft_reverse_rotate(swap_b);
	ft_printf("rrr\n");
}
