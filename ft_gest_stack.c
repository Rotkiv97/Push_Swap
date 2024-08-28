/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gest_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 11:41:34 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/24 11:41:36 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_swap	*ottieni_min_stack(t_swap *swap)
{
	while (swap)
	{
		if (!swap->next)
			return (swap);
		swap = swap->next;
	}
	return (swap);
}

t_swap	*ottieni_prima_stack_min(t_swap **swap)
{
	while (*swap != NULL)
	{
		if ((*swap && (*swap)->next) && (*swap)->next->next)
			return ((*swap)->next);
		*swap = (*swap)->next;
	}
	return (*swap);
}

t_swap	*ft_new_stack(int val)
{
	t_swap	*new;

	new = malloc(sizeof(t_swap));
	if (!new)
		return (NULL);
	new->val = val;
	new->index = 0;
	new->posizione = -1;
	new->next = NULL;
	return (new);
}
