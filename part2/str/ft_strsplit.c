/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvillepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:47:00 by yvillepo          #+#    #+#             */
/*   Updated: 2017/11/11 18:56:00 by yvillepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*ft_strdup_split(char **src, char c)
{
	char	*src1;
	int		i;
	char	*a;

	i = 0;
	while (**src == c)
		(*src)++;
	while ((*src)[i])
		i++;
	src1 = (char*)malloc(i + 1);
	a = src1;
	if (src1 != NULL)
	{
		while (**src != c && **src)
		{
			*src1 = **src;
			(*src)++;
			src1++;
		}
		*src1 = '\0';
	}
	return (a);
}

int		nb_mots(char *str, char c)
{
	int		m;

	m = 1;
	while (*str)
	{
		if (*str == c)
			m++;
		while (*str == c)
		{
			str++;
			if (!*str)
				return (m - 1);
		}
		str++;
	}
	return (m);
}

char	**ft_strsplit(char *str, char c)
{
	char	**tab;
	int		nb_m;
	int		i;

	if (!str)
		return (NULL);
	while (*str == c)
		str++;
	if (*str == 0)
	{
		tab = (char**)malloc(sizeof(*tab));
		tab[0] = 0;
		return (tab);
	}
	nb_m = nb_mots(str, c);
	tab = (char**)malloc(sizeof(*tab) * nb_m + 1);
	i = 0;
	while (i < nb_m)
	{
		tab[i] = ft_strdup_split(&str, c);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
