/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piccola_smistata.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:26:58 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/24 12:27:01 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_val(t_swap **swap, int a, int b, int c)
{
	if (ft_controllo_smistata(*swap))
		return ;
	if (a > b && a < c && b < c)
		ft_swap_a(swap);
	if (a > b && a > c && b > c)
	{
		ft_swap_a(swap);
		ft_reverse_rotate_a(swap);
	}
	if (a > b && b < c && a > c)
		ft_rotate_a(swap);
	if (a < b && b > c && a > c)
		ft_reverse_rotate_a(swap);
	if (a < b && a < c && b > c)
	{
		ft_swap_a(swap);
		ft_rotate_a(swap);
	}
}

void	ft_piccola_smistata(t_swap **swap)
{
	int		a;
	int		b;
	int		c;
	t_swap	*tmp;

	tmp = (*swap);
	a = (*swap)->val;
	b = (*swap)->next->val;
	c = (*swap)->next->next->val;
	while (tmp)
	{
		ft_val(swap, a, b, c);
		tmp = tmp->next;
	}
}
