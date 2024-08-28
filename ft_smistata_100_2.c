/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smistata_100_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:07:05 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/27 11:07:09 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_funzionamento_b(int i, int size_b)
{
	if (i > (size_b / 2))
		i -= size_b;
	return (i);
}

int	*ft_gest_nbr_b(int *arr_b, int size_b, int *b)
{
	int	i;

	i = 0;
	arr_b = b;
	while (i < size_b)
	{
		arr_b[i] = ft_funzionamento_b(i, size_b);
		i++;
	}
	return (arr_b);
}

int	ft_min_stack(int *stack_a, int size_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size_a)
	{
		if (stack_a[i] < stack_a[j])
			j = i;
		i++;
	}
	return (j);
}

int	ft_mag_min(int *stack_a, int size_a, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < size_a && stack_a[j] < n)
		j++;
	if (j < size_a)
		i = j;
	while (j < size_a)
	{
		if (stack_a[i] > stack_a[j] && stack_a[j] > n)
			i = j;
		j++;
	}
	if (i == 0 && n > stack_a[i])
		i = ft_min_stack(stack_a, size_a);
	if (i != 0)
		i = ft_funzionamento_b(i, size_a);
	return (i);
}

int	*ft_gest_nbr_a(t_swap **swap_a, t_swap **swap_b, int *stack_b, int *stack_a)
{
	int	i;
	int	size_b;
	int	size_a;
	int	*arr_a;

	size_a = ft_grandezza_stack(*swap_a);
	size_b = ft_grandezza_stack(*swap_b);
	arr_a = (int *)malloc(sizeof(int) * size_b);
	stack_b = ft_utilis_lis(swap_b, size_b, stack_b);
	stack_a = ft_utilis_lis(swap_a, size_a, stack_a);
	i = 0;
	while (i < size_b)
	{
		arr_a[i] = ft_mag_min(stack_a, size_a, stack_b[i]);
		i++;
	}
	return (arr_a);
}
