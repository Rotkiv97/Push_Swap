/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:55:06 by vguidoni          #+#    #+#             */
/*   Updated: 2023/02/28 13:55:08 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_nb(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}

size_t	ft_str(const char *str)
{
	size_t	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	b;
	size_t	c;

	b = ft_str(src);
	c = 0;
	while (dst[c])
		c++;
	c = 0 ;
	if (size != 0)
	{
		while (src[c] != '\0' && c < size - 1)
		{
			dst[c] = src[c];
			c++;
		}
		dst[c] = '\0';
	}
	return (b);
}

int	ft_atoi(const char *nptr)
{
	const char	*y;
	int			tab;
	int			j;
	int			i;

	y = nptr;
	i = 0;
	tab = 0;
	j = 1;
	while ((y[i] >= 9 && y[i] <= 13) || y[i] == ' ')
		i++;
	if (y[i] == 43)
		i++;
	else if (y[i] == 45)
	{
		j *= -1;
		i++;
	}
	while (y[i] >= 48 && y[i] <= 57)
	{
		tab *= 10;
		tab += y[i] - 48;
		i++;
	}
	return (tab * j);
}

char	*ft_strjoi(char *s1, char *s2)
{
	char			*l;
	unsigned int	p;
	unsigned int	k;

	p = 0;
	k = 0;
	l = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!l)
		return (NULL);
	while (s1[p] != '\0')
	{
		l[p] = s1[p];
		p++;
	}
	while (s2[k] != '\0')
	{
		l[p + k] = s2[k];
		k++;
	}
	l[p + k] = '\0';
	return (l);
}
