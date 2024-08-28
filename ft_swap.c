/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:11:21 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/27 17:11:23 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_swap *swap)
{
	int	tmp;

	if (swap == NULL || swap->next == NULL)
		return ;
	tmp = swap->val;
	swap->val = swap->next->val;
	swap->next->val = tmp;
	tmp = swap->index;
	swap->index = swap->next->index;
	swap->next->index = tmp;
}

void	ft_swap_a(t_swap **swap)
{	
	ft_swap(*swap);
	ft_printf("sa\n");
}

void	ft_swap_b(t_swap **swap)
{
	ft_swap(*swap);
	ft_printf("sb\n");
}

void	ft_swap_ss(t_swap **swap_a, t_swap **swap_b)
{
	ft_swap(*swap_a);
	ft_swap(*swap_b);
	ft_printf("ss\n");
}
