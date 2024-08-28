/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gest_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 10:42:56 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/24 10:43:00 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_swap(t_swap **swap)
{
	t_swap	*tmp;

	if (!swap || !*swap)
		return ;
	while (*swap)
	{
		tmp = (*swap);
		*swap = (*swap)->next;
		free(tmp);
	}
	*swap = NULL;
}

int	ft_controllo_smistata(t_swap *swap)
{
	while (swap->next != NULL)
	{
		if (swap->val > swap->next->val)
			return (0);
		swap = swap->next;
	}
	return (1);
}

void	ft_controllo_repetizioni(t_swap *swap)
{
	int	i;
	int	j;

	i = 0;
	while (i < swap->len_a)
	{
		j = i + 1;
		while (j < swap->len_a)
		{
			if (swap->stack_a[i] == swap->stack_a[j])
			{
				ft_printf("\033[91m ci sono delle ripetizione\n");
				ft_free_swap(&swap);
			}
			j++;
		}
		i++;
	}
}

void	ft_free_list(char **list)
{
	char	**s;

	s = list;
	while (list && *list)
		free(*list++);
	free(s);
}
