/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:14:35 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/27 17:14:38 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include "./printf/ft_printf.h"

typedef struct s_swap
{
	int				*stack_a;
	int				*stack_b;
	int				*smistata;
	int				*smistata_inx;
	int				len_a;
	int				len_b;
	int				index;
	int				val;
	int				posizione;
	int				pos_obb;
	int				const_a;
	int				const_b;
	int				a;
	int				b;
	int				c;
	int				d;
	int				e;
	struct s_swap	*ptr;
	struct s_swap	*highest;
	struct s_swap	*next;
}	t_swap;

char	**ft_split(char const *s, char c);
int		ft_isdigit(int j);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
char	*ft_strjoi(char *s1, char *s2);
int		ft_nb(int nb);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_atoi(const char *nptr);
int		ft_nbr(char *argv);
int		ft_arg_e_zero(char *argv);
int		ft_controllo_arg(char **argv);
void	ft_push_swap(t_swap **swap_a, t_swap **swap_b);
void	ft_free_swap(t_swap **swap);
int		ft_controllo_smistata(t_swap *swap);
void	ft_controllo_repetizioni(t_swap *swap);
void	ft_free_list(char **list);
long	ft_atoi_long(const char *str, t_swap *swap);
t_swap	*ft_set_values(int argc, char **argv);
void	ft_mosse(t_swap **swap_a, t_swap **swap_b, int cost_a, int cost_b);
void	ft_gestione_mosse(t_swap **swap_a, t_swap **swap_b);
void	ft_ordinamento_mosse(t_swap **swap_a, t_swap **swap_b);
int		ft_grandezza_stack(t_swap *swap);
int		ft_indice_piu_alto(t_swap *swap);
void	ft_indice(t_swap *swap, int size);
void	ft_minuscola(t_swap **swap);
void	ft_rotate(t_swap **swap);
void	ft_ottieni_posizione(t_swap **swap);
int		ft_posizione_inferiore(t_swap **swap);
int		ft_ottieni(t_swap **swap, int b, int obbiettivo, int posizione);
void	ft_ottieni_pos_obbiettivo(t_swap **swap_a, t_swap **swap_b);
int		ft_indice_alto(t_swap *swap);
void	ft_piccola_smistata(t_swap **swap);
void	ft_push(t_swap **s, t_swap **d);
void	ft_push_a(t_swap **swap_a, t_swap **swap_b);
void	ft_push_b(t_swap **swap_a, t_swap **swap_b);
void	ft_reverse_rotate(t_swap **swap);
void	ft_reverse_rotate_a(t_swap **swap);
void	ft_reverse_rotate_b(t_swap **swap);
void	ft_reverse_rotate_rrr(t_swap **swap_a, t_swap **swap_b);
void	ft_in(t_swap **swap_a, t_swap **swap_b, int *cost_a, int *cost_b);
void	ft_ent(t_swap **swap_a, t_swap **swap_b, int *cost_a, int *cost_b);
void	ft_do_rotate_a(t_swap **swap, int *cost);
void	ft_do_rotate_b(t_swap **swap, int *cost);
void	ft_rotate(t_swap **swap);
void	ft_rotate_a(t_swap **swap);
void	ft_rotate_b(t_swap **sawp);
void	ft_rotate_rr(t_swap **swap_a, t_swap **swap_b);
void	ft_spostamento_stack_tranne_tre(t_swap **swap_a, t_swap **swap_b);
void	ft_spostamento_stack(t_swap **swap);
void	ft_swap(t_swap *swap);
void	ft_swap_a(t_swap **swap);
void	ft_swap_b(t_swap **swap);
void	ft_swap_ss(t_swap **swap_a, t_swap **swap_b);
int		ft_controllo_stack(char **argv);
void	ft_smistata_quatro(t_swap **swap_a, t_swap **swap_b);
void	ft_val_minore(t_swap **swap_a, t_swap **swap_b);
void	ft_smistata_cinque(t_swap **swap_a, t_swap **swap_b);
void	ft_smistata(t_swap **swap_a, int size_a, t_swap **swap_b, int size_b);
int		ft_funzionamento_b(int i, int size_b);
int		ft_min_stack(int *stack_a, int size_a);
int		*ft_utilis_lis(t_swap **swap, int size, int *arr);
int		ft_mag_min(int *stack_a, int size_a, int n);
int		ft_segno(char c);
int		ft_compreso(char c);
t_swap	*ft_new_stack(int val);
t_swap	*ottieni_min_stack(t_swap *swap);
void	ft_aggiungi_parte_inferiore_stack(t_swap **swap, t_swap *newS);
int		*ft_lis( int size, int *arr);
int		ft_grandezza_lis(int *lis, int size);
int		*ft_pulizia_lis(int *lis, int max, int *arr, int size);
void	ft_applica_lis(t_swap **swap_a, t_swap **swap_b, int max, int *new_lis);
int		*ft_gest_nbr_b(int *arr_b, int size_b, int *b);
int		*ft_gest_nbr_a(t_swap **swap_a, t_swap **swap_b, int *b, int *a);
int		*ft_tabella(int *move_a, int *move_b, int size_b);
int		*ft_scelta_mosse(int *move_a, int *move_b, int size_b, int *stack_b);
int		ft_min_arr_c(int *arr_c, int size_b);
void	ft_gest_b(int b, t_swap **swap_b);
void	ft_gest_a(int a, t_swap **swap_a);
void	ft_gest_rrr(int c, t_swap **swap_a, t_swap **swap_b);
void	ft_gest_rr( int c, t_swap **swap_a, t_swap **swap_b);
void	ft_app_mosse(int a, int b, t_swap **swap_a, t_swap **swap_b);
void	ft_fin(t_swap **swap_a, t_swap **swap_b, int *move_a, int *move_b);
int		*ft_scelta_mosse(int *move_a, int *move_b, int size_b, int *stack_b);
void	ft_tab_t(int *mos, int i, int *move_b, int *move_a);

#endif
