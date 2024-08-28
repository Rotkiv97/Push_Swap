/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gest_arg_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 10:49:40 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/24 10:49:42 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_nbr(char *argv)
{
	int	i;

	i = 0;
	if ((argv[i] == '+' && argv[i] == '-') && argv[i + 1] != '\0')
		i++;
	while (argv[i] && (argv[i] >= '0' && argv[i] <= '9'))
		i++;
	if (argv[i] != '\0' && !(argv[i] >= '0' && argv[i] <= '9'))
		return (0);
	return (1);
}

int	ft_arg_e_zero(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] == '-' || argv[i] == '+')
		i++;
	while (argv[i] && argv[i] == '0')
		i++;
	if (argv[i] != '0')
		return (0);
	return (1);
}

int	ft_controllo_arg(char **argv)
{
	int	i;
	int	k;

	i = 1;
	while (argv[i])
	{
		if (!ft_nbr(argv[i]))
			return (0);
		k = ft_arg_e_zero(argv[i]);
		i++;
	}
	k = k;
	return (1);
}

t_swap	*ft_set_values(int argc, char **argv)
{
	t_swap		*swap;
	t_swap		*a;
	long int	k;
	int			i;

	swap = NULL;
	k = 0;
	i = 1;
	while (i < argc)
	{
		k = ft_atoi(argv[i]);
		if (k > INT_MAX || k < INT_MIN)
			break ;
		if (i == 1)
			swap = ft_new_stack(k);
		else
		{
			a = ft_new_stack(k);
			ft_aggiungi_parte_inferiore_stack(&swap, a);
		}
		i++;
	}
	return (swap);
}
