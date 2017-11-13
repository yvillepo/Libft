/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvillepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:13:29 by yvillepo          #+#    #+#             */
/*   Updated: 2017/11/12 18:33:12 by yvillepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	char	*n;

	if (!s1 || !s2)
		return (NULL);
	if (!(new = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	n = new;
	while (*s1)
		*n++ = *s1++;
	while (*s2)
	{
		*n++ = *s2++;
	}
	*n = 0;
	return (new);
}
