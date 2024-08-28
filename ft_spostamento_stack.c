/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spostamento_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:05:34 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/27 17:05:37 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_spostamento_stack(t_swap **swap)
{
	int	pos;
	int	size;

	size = ft_grandezza_stack(*swap);
	pos = ft_posizione_inferiore(swap);
	if (pos > size / 2)
	{
		while (pos < size)
		{
			ft_reverse_rotate_a(swap);
			pos++;
		}
	}
	else
	{
		while (pos > 0)
		{
			ft_rotate_a(swap);
			pos--;
		}
	}
}
