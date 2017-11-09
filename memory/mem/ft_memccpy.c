/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtedgui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:24:40 by dtedgui           #+#    #+#             */
/*   Updated: 2017/11/09 15:31:36 by yvillepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	cc;
	unsigned char	*d;
	unsigned char	*s;

	if (!dst || !src)
		return (NULL);
	cc = (unsigned char)c;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	while (n--)
	{
		if ((*d++ = *s++) == cc)
			return (d);
	}
	return (NULL);
}
