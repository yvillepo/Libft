/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvillepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:34:57 by yvillepo          #+#    #+#             */
/*   Updated: 2017/11/10 15:58:01 by yvillepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_p;
	const char	*src_p;

	if (n == 0 || dst == src)
		return (dst);
	dst_p = (char*)dst;
	src_p = (const char*)src;
	while (n--)
		*dst_p++ = *src_p++;
	return (dst);
}
