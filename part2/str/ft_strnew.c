/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvillepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 18:02:04 by yvillepo          #+#    #+#             */
/*   Updated: 2017/11/11 14:10:42 by yvillepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if(!(str = (char*)malloc(size + 1)))
		return (NULL);
	ft_bzero(str,size + 1);
	return (str);
}
