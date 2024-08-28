/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:03:32 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/28 21:03:38 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../push_swap.h"
# include "./get_next_line/get_next_line.h"

void	ft_push_ck(t_swap **s, t_swap **d);
void	ft_push_a_ck(t_swap **swap_a, t_swap **swap_b);
void	ft_push_b_ck(t_swap **swap_a, t_swap **swap_b);
void	ft_rotate_ck(t_swap **swap);
void	ft_rotate_a_ck(t_swap **swap);
void	ft_rotate_b_ck(t_swap **sawp);
void	ft_rotate_rr_ck(t_swap **swap_a, t_swap **swap_b);
void	ft_reverse_rotate_ck(t_swap **swap);
void	ft_reverse_rotate_a_ck(t_swap **swap);
void	ft_reverse_rotate_b_ck(t_swap **swap);
void	ft_reverse_rotate_rrr_ck(t_swap **swap_a, t_swap **swap_b);
void	ft_swap_ck(t_swap *swap);
void	ft_swap_a_ck(t_swap **swap);
void	ft_swap_b_ck(t_swap **swap);
void	ft_swap_ss_ck(t_swap **swap_a, t_swap **swap_b);

#endif
