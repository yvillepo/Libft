/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvillepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 16:41:14 by yvillepo          #+#    #+#             */
/*   Updated: 2017/11/12 20:19:41 by yvillepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new->content = 0;
		return (new);
	}
	if (!(new->content = malloc(content_size)))
	{
		new->content = 0;
		return (new);
	}
	ft_memcpy(new->content, content, content_size);
	new->content_size = content_size;
	return (new);
}
