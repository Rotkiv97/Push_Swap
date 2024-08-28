/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smistata_100_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:06:44 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/27 11:06:48 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	*ft_utilis_lis(t_swap **swap, int size, int *arr)
{
	int		i;
	t_swap	*tmp;

	tmp = *swap;
	i = 0;
	while (i < size)
	{
		arr[i] = tmp->val;
		if (i != size)
			tmp = tmp->next;
		i++;
	}
	return (arr);
}

int	*ft_lis( int size, int *arr)
{
	int	*lis;
	int	i;
	int	j;

	i = 0;
	lis = malloc(sizeof(int) * size);
	while (i < size)
	{
		lis[i] = 1;
		j = 0;
		while (j < i)
		{
			if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
				lis[i] = lis[j] + 1;
			j++;
		}
		i++;
	}
	return (lis);
}

int	ft_grandezza_lis(int *lis, int size)
{
	int	i;
	int	max;

	max = 0;
	i = 0;
	while (i < size && i != size)
	{
		if (lis[i] > max)
			max = lis[i];
		i++;
	}
	return (max);
}

int	*ft_pulizia_lis(int *lis, int max, int *arr, int size)
{
	int	i;
	int	flag;
	int	*new_lis;

	new_lis = (int *)malloc(sizeof(int) * max);
	while (max >= 1)
	{
		i = size -1;
		flag = 1;
		while (i >= 0)
		{
			if (lis[i] == max && flag == 1)
			{
				new_lis[max -1] = arr[i];
				size = i;
				flag = 0;
			}
			i--;
		}
		max--;
	}
	return (new_lis);
}

void	ft_applica_lis(t_swap **swap_a, t_swap **swap_b, int max, int *nl_lis)
{
	int	i;
	int	k;
	int	size;
	int	*arr;

	size = ft_grandezza_stack(*swap_a);
	arr = (int *)malloc(sizeof(int) * size);
	arr = ft_utilis_lis(swap_a, size, arr);
	k = 0;
	i = 0;
	while (i < size)
	{
		if (k < max)
			ft_rotate_a(swap_a);
		while (i < size && nl_lis[k] != arr[i])
		{
			ft_push_b(swap_a, swap_b);
			i++;
		}
		i++;
	}
	ft_push_b(swap_a, swap_b);
	free(arr);
}
