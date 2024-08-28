/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:54:49 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/28 13:54:54 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	j;
	char	*y;

	j = 0;
	y = s;
	while (j < n)
	{
		y[j] = '\0';
		j++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	y;

	y = size * nmemb;
	if (nmemb != 0 && size != y / nmemb)
		return (NULL);
	p = (void *)malloc(y);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, y);
	return (p);
}

int	ft_isdigit(int j)
{
	if (!(j >= '0' && j <= '9'))
		return (0);
	return (1);
}
