/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gest_arg_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 11:16:00 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/24 11:16:02 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_controllo_str_cmp(const char *s1, const char *s2)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (s1[i] == '+')
	{
		if (s2[k] != '+')
			i++;
	}
	else
	{
		if (s2[k] == '+')
			k++;
	}
	while (s1[i] != '\0' && s2[k] != '\0' && s1[i] == s2[k])
	{
		i++;
		k++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[k]);
}

static int	ft_numeri(char *argv)
{
	int	i;

	i = 0;
	if (ft_segno(argv[i]) && argv[i +1] != '\0')
		i++;
	while (argv[i] && ft_compreso(argv[i]))
		i++;
	if (argv[i] != '\0' && !ft_compreso(argv[i]))
		return (0);
	return (1);
}

static int	ft_duplicazioni(char **argv)
{
	int	i;
	int	k;

	i = 0;
	while (argv[i])
	{
		k = 1;
		while (argv[k])
		{
			if (k != i && ft_controllo_str_cmp(argv[i], argv[k]) == 0)
				return (1);
			k++;
		}
		i++;
	}
	return (0);
}

static int	ft_argv_uguale_a_zero(char *argv)
{
	int	i;

	i = 0;
	if (ft_segno(argv[i]))
		i++;
	while (argv[i] && argv[i] == '0')
		i++;
	if (argv[i] != '\0')
		return (0);
	return (1);
}

int	ft_controllo_stack(char **argv)
{
	int	i;
	int	k;

	k = 0;
	i = 1;
	while (argv[i])
	{
		if (!ft_numeri(argv[i]))
			return (0);
		k += ft_argv_uguale_a_zero(argv[i]);
		i++;
	}
	if (k > 1)
		return (0);
	if (ft_duplicazioni(argv))
		return (0);
	return (1);
}
