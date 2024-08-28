/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smistata_quatro.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:43:46 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/27 15:43:51 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_val_minore(t_swap **swap_a, t_swap **swap_b)
{
	int		a;
	int		b;
	int		c;
	int		d;
	t_swap	*tmp;

	tmp = *swap_a;
	a = tmp->val;
	b = tmp->next->val;
	c = tmp->next->next->val;
	d = tmp->next->next->next->val;
	if (a < b && a < c && a < d && !ft_controllo_smistata(*swap_a))
		ft_controllo_smistata(*swap_a);
	else if (b < a && b < c && b < d)
		ft_rotate_a(swap_a);
	else if (c < a && c < b && c < d)
	{
		ft_rotate_a(swap_a);
		ft_rotate_a(swap_a);
	}
	else if (d < a && d < b && d < c)
		ft_reverse_rotate_a(swap_a);
	if (ft_controllo_smistata(*swap_a))
		return ;
	ft_push_b(swap_a, swap_b);
}

void	ft_smistata_quatro(t_swap **swap_a, t_swap **swap_b)
{
	int		a;
	int		b;
	int		c;
	int		d;
	t_swap	*tmp;

	tmp = *swap_a;
	a = tmp->val;
	b = tmp->next->val;
	c = tmp->next->next->val;
	d = tmp->next->next->next->val;
	if (ft_controllo_smistata(*swap_a))
		return ;
	ft_val_minore(swap_a, swap_b);
	ft_piccola_smistata(swap_a);
	ft_push_a(swap_a, swap_b);
	a = a;
	b = b;
	c = c;
	d = d;
}
