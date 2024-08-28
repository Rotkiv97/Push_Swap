/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chaker_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:40:45 by vguidoni          #+#    #+#             */
/*   Updated: 2023/03/02 14:40:49 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_push_ck(t_swap **s, t_swap **d)
{
	t_swap	*tmp;

	if (*s == NULL)
		return ;
	tmp = (*s)->next;
	(*s)->next = *d;
	*d = *s;
	*s = tmp;
}

void	ft_push_a_ck(t_swap **swap_a, t_swap **swap_b)
{
	ft_push_ck(swap_b, swap_a);
}

void	ft_push_b_ck(t_swap **swap_a, t_swap **swap_b)
{
	ft_push_ck(swap_a, swap_b);
}
