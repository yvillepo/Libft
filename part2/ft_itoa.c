/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvillepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 20:01:41 by yvillepo          #+#    #+#             */
/*   Updated: 2017/11/11 22:17:43 by yvillepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int n)
{
	int cmp;

	cmp = 0;
	if (!n)
		return (2);
	if (n < 0)
		cmp++;
	while (n)
	{
		n = n / 10;
		cmp++;
	}
	return (cmp + 1);
}
char	*ft_itoa(int n)
{
	char	*str_nbr;
	int		i;

	i = 0;
	if (n < 0) 
	{
		if(!(str_nbr = (char*)malloc(len(n))))
			return (NULL);
		while (n)
		{
			str_nbr[i] = '0' - (n % 10);
			n = n / 10;
			i++;
		}
		str_nbr[i] = '-';
		i++;
	}	
	else 
	{
		if(!(str_nbr = (char*)malloc(len(n))))
			return (NULL);
		if (n == 0)
		{
			*str_nbr = '0';
			i++;
		}
		while (n)
		{
			str_nbr[i] = '0' + (n % 10);
			n = n /10;
			i++;
		}
	}
	str_nbr[i] = '\0';
	return(ft_rev(str_nbr));
}
