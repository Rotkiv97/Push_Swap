/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ottieni_pos_obbiettivo.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:19:36 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/24 12:19:39 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ottieni_posizione(t_swap **swap)
{
	t_swap	*tmp;
	int		i;

	tmp = *swap;
	i = 0;
	while (tmp)
	{
		i = tmp->posizione;
		tmp = tmp->next;
		i++;
	}
}

int	ft_posizione_inferiore(t_swap **swap)
{
	t_swap	*tmp;
	int		indexL;
	int		posL;

	tmp = *swap;
	indexL = INT_MAX;
	ft_ottieni_posizione(swap);
	posL = tmp->posizione;
	while (tmp)
	{
		if (tmp->index < indexL)
		{
			indexL = tmp->index;
			posL = tmp->posizione;
		}
		tmp = tmp->next;
	}
	return (posL);
}

void	ft_aggiungi_parte_inferiore_stack(t_swap **swap, t_swap *newS)
{
	t_swap	*tail;

	if (!newS)
		return ;
	if (!*swap)
	{
		*swap = newS;
		return ;
	}
	tail = ottieni_min_stack(*swap);
	tail->next = newS;
}
