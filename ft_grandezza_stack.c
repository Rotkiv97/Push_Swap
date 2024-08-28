/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grandezza_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 11:46:58 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/24 11:47:01 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_grandezza_stack(t_swap *swap)
{
	int	size;

	size = 0;
	if (!swap)
		return (0);
	while (swap)
	{
		swap = swap->next;
		size++;
	}
	return (size);
}
