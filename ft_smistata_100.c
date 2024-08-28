/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smistata_100.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:32:28 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/27 11:32:40 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_muovi_in_a(t_swap **swap_b, t_swap **swap_a, int size_b, int *new_lis)
{
	int	*arr_a;
	int	*arr_b;
	int	*b;
	int	size_a;

	size_a = ft_grandezza_stack(*swap_a);
	arr_b = (int *)malloc(sizeof(int) * size_b);
	b = ft_utilis_lis(swap_b, size_b, arr_b);
	arr_b = ft_gest_nbr_b(arr_b, size_b, b);
	new_lis = ft_utilis_lis(swap_a, size_a, new_lis);
	arr_a = ft_gest_nbr_a(swap_a, swap_b, b, new_lis);
	ft_fin(swap_a, swap_b, arr_a, arr_b);
	free(arr_a);
	free(arr_b);
}

void	ft_help_norm(int *arr, int size_a, t_swap **swap_a, t_swap **swap_b)
{	
	int	*lis;
	int	max;
	int	*tmp_lis;

	lis = ft_lis(size_a, arr);
	max = ft_grandezza_lis(lis, size_a);
	tmp_lis = ft_pulizia_lis(lis, max, arr, size_a);
	ft_applica_lis(swap_a, swap_b, max, tmp_lis);
	free(tmp_lis);
	free(lis);
}

void	ft_smistata(t_swap **swap_a, int size_a, t_swap **swap_b, int size_b)
{
	int	*arr;
	int	*tmp_lis;

	tmp_lis = (int *)malloc(sizeof(int) * size_a);
	tmp_lis = ft_utilis_lis(swap_a, size_a, tmp_lis);
	arr = (int *)malloc(sizeof(int) * size_a);
	arr = ft_utilis_lis(swap_a, size_a, arr);
	if (ft_controllo_smistata(*swap_a))
		return ;
	ft_help_norm(arr, size_a, swap_a, swap_b);
	size_a = ft_grandezza_stack(*swap_a);
	while (ft_grandezza_stack(*swap_b) > 0)
	{
		size_b = ft_grandezza_stack(*swap_b);
		size_a = ft_grandezza_stack(*swap_a);
		ft_muovi_in_a(swap_b, swap_a, size_b, tmp_lis);
	}
	free(tmp_lis);
	free(arr);
}
