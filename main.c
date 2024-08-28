/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:41:20 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/24 12:41:23 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_errore(t_swap **swap_a, t_swap **swap_b)
{
	if (swap_a == NULL || *swap_a != NULL)
		ft_free_swap(swap_a);
	if (swap_b == NULL || *swap_b != NULL)
		ft_free_swap(swap_b);
	ft_printf("\033[31m c'è la puoi fare imbecille\n");
	exit(1);
}

void	ft_ordinamento_finale(t_swap **swap_a, int size_a)
{	
	int	i;
	int	*stack_a;

	stack_a = (int *)malloc(sizeof(int) * size_a);
	stack_a = ft_utilis_lis(swap_a, size_a, stack_a);
	i = ft_min_stack(stack_a, size_a);
	i = ft_funzionamento_b(i, size_a);
	if (!(ft_controllo_smistata(*swap_a)))
	{
		while (i < 0 && i != 0)
		{
			ft_reverse_rotate_a(swap_a);
			i++;
		}
		while (i > 0 && i != 0)
		{
			ft_rotate_a(swap_a);
			i--;
		}
	}
	free(stack_a);
}

void	ft_push_swap(t_swap **swap_a, t_swap **swap_b)
{
	int	size_b;
	int	stack_a;

	size_b = 0;
	stack_a = 0;
	size_b = ft_grandezza_stack(*swap_b);
	stack_a = ft_grandezza_stack(*swap_a);
	if (stack_a == 2 && !ft_controllo_smistata(*swap_a))
		ft_swap_a(swap_a);
	else if (stack_a == 3)
		ft_piccola_smistata(swap_a);
	else if (stack_a == 4)
		ft_smistata_quatro(swap_a, swap_b);
	else if (stack_a == 5)
		ft_smistata_cinque(swap_a, swap_b);
	else if (stack_a > 5)
	{
		ft_smistata(swap_a, stack_a, swap_b, size_b);
		ft_ordinamento_finale(swap_a, stack_a);
	}
}

int	main(int argc, char **argv)
{
	t_swap	*swap_a;
	t_swap	*swap_b;
	t_swap	*tmp;

	if (argc < 2){
		ft_errore(NULL,NULL);
		return 1;
	}
	if (!ft_controllo_stack(argv))
		ft_errore(NULL, NULL);
	swap_a = ft_set_values(argc, argv);
	swap_b = NULL;
	ft_push_swap(&swap_a, &swap_b);
	while (swap_a)
	{
		tmp = swap_a;
		swap_a = swap_a->next;
		free(tmp);
	}
	while (swap_b)
	{
		tmp = swap_b;
		swap_b = swap_b->next;
		free(tmp);
	}
	return 0;
}
