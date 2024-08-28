/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:54:50 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/28 20:54:53 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "checker.h"

int	ft_strcmp(char *a, char *b)
{
	int	i;

	i = 0;
	if (!a && !b)
		return (0);
	while (a[i] && b[i])
	{
		if (a[i] != b[i])
			return (0);
		i++;
	}
	return (1);
}

void	ft_cheker_argv(t_swap **swap_a, t_swap **swap_b, char *str)
{
	if (ft_strcmp(str, "sa\n"))
		ft_swap_a_ck(swap_a);
	else if (ft_strcmp(str, "sb\n"))
		ft_swap_b_ck(swap_b);
	else if (ft_strcmp(str, "ss\n"))
		ft_swap_ss_ck(swap_a, swap_b);
	else if (ft_strcmp(str, "ra\n"))
		ft_rotate_a_ck(swap_a);
	else if (ft_strcmp(str, "rb\n"))
		ft_rotate_b_ck(swap_b);
	else if (ft_strcmp(str, "rr\n"))
		ft_rotate_rr_ck(swap_a, swap_b);
	else if (ft_strcmp(str, "pa\n"))
		ft_push_a_ck(swap_a, swap_b);
	else if (ft_strcmp(str, "pb\n"))
		ft_push_b_ck(swap_a, swap_b);
	else if (ft_strcmp(str, "rra\n"))
		ft_reverse_rotate_a_ck(swap_a);
	else if (ft_strcmp(str, "rrb\n"))
		ft_reverse_rotate_b_ck(swap_b);
	else if (ft_strcmp(str, "rrr\n"))
		ft_reverse_rotate_rrr_ck(swap_a, swap_b);
}

void	ft_ck(char *s, t_swap *swap_a, t_swap *swap_b)
{
	if (!(ft_controllo_smistata(swap_a)))
	{
		s = get_next_line(0);
		while (s)
		{
			ft_cheker_argv(&swap_a, &swap_b, s);
			s = get_next_line(0);
		}
		if (ft_controllo_smistata(swap_a))
			ft_printf("ok\n");
		else
			ft_printf("ko\n");
	}
}

int	main(int argc, char **argv)
{
	t_swap	*swap_a;
	t_swap	*swap_b;
	char	*s;

	swap_a = ft_set_values(argc, argv);
	swap_b = NULL;
	s = NULL;
	if (argc > 1)
	{
		if (!(ft_controllo_stack(argv)))
		{
			ft_printf("error\n");
			return (0);
		}
		ft_ck(s, swap_a, swap_b);
	}
	else
		ft_printf("\n");
}
