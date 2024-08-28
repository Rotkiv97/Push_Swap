/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:39:31 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/24 12:39:33 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_swap **s, t_swap **d)
{
	t_swap	*tmp;

	if (*s == NULL)
		return ;
	tmp = (*s)->next;
	(*s)->next = *d;
	*d = *s;
	*s = tmp;
}

void	ft_push_a(t_swap **swap_a, t_swap **swap_b)
{
	ft_push(swap_b, swap_a);
	ft_printf("pa\n");
}

void	ft_push_b(t_swap **swap_a, t_swap **swap_b)
{
	ft_push(swap_a, swap_b);
	ft_printf("pb\n");
}
