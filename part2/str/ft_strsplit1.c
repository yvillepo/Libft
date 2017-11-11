/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvillepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 17:09:50 by yvillepo          #+#    #+#             */
/*   Updated: 2017/11/11 19:45:18 by yvillepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static int	count_words(const char *s, char c)
{
	int cmp;

	cmp = 0;
	while (*s)
	{
		if (*s != c)
		{
			cmp++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (cmp);
}

static int	strlen_split(const char *s, char c)
{
	const char	*s1;

	s1 = s;
	while (*s != c && *s)
		s++;
	return (s - s1);
}

static char	*strdup_split(const char **pstr, char c)
{
	int			length;
	char		*str;

	length = strlen_split(*pstr, c);
	if (!(str = (char*)malloc(length + 1)))
		return (NULL);
	while (**pstr != c && *str)
	{
		*str = **pstr;
		str++;
		(*pstr)++;
	}
	*str = 0;
	return (str);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**split;
	int		nb_words;
	int 	i;

	if (!s)
		return (NULL);
	nb_words = count_words(s, c);
	/*if (!(nb_words = count_words(s, c)))
		return (NULL);*/
	i = 0;
	if (!(split = (char**)malloc(sizeof(*split)*count_words(s, c))))
		return (NULL);
	while (i < nb_words)
		split[i++] = strdup_split(&s, c);
	return (split);
}
/*
int main(int ac, char **av)
{
	if (ac < 2)
	{
		printf ("argg !!");
		return (0);
	}
	printf("cw : %d",count_words(av[1],' '));
}*/
