/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:46:25 by vguidoni          #+#    #+#             */
/*   Updated: 2023/03/02 14:46:29 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_reverse_rotate_ck(t_swap **swap)
{
	t_swap	*tail;
	t_swap	*prima;

	prima = (*swap);
	tail = ottieni_min_stack(*swap);
	while (prima->next != tail)
		prima = prima->next;
	prima->next = NULL;
	tail->next = (*swap);
	(*swap) = tail;
}

void	ft_reverse_rotate_a_ck(t_swap **swap)
{
	ft_reverse_rotate(swap);
}

void	ft_reverse_rotate_b_ck(t_swap **swap)
{
	ft_reverse_rotate(swap);
}

void	ft_reverse_rotate_rrr_ck(t_swap **swap_a, t_swap **swap_b)
{
	ft_reverse_rotate_ck(swap_a);
	ft_reverse_rotate_ck(swap_b);
}
