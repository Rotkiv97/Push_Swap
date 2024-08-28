/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:46:37 by vguidoni          #+#    #+#             */
/*   Updated: 2023/03/02 14:46:41 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_swap_ck(t_swap *swap)
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

void	ft_swap_a_ck(t_swap **swap)
{	
	ft_swap_ck(*swap);
}

void	ft_swap_b_ck(t_swap **swap)
{
	ft_swap_ck(*swap);
}

void	ft_swap_ss_ck(t_swap **swap_a, t_swap **swap_b)
{
	ft_swap_ck(*swap_a);
	ft_swap_ck(*swap_b);
}
