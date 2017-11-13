/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvillepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:08:32 by yvillepo          #+#    #+#             */
/*   Updated: 2017/11/13 17:33:49 by yvillepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static int	calcul(const char *str, int sign)
{
	unsigned int	result;
	unsigned int	digit;

	result = 0;
	while (*str)
	{
		digit = *str - '0';
		str++;
		if (digit > 9)
			break ;
		result = (result * 10) + digit;
		if (result > 2147483647)
		{
			if (sign && result > 2147483648)
				return (0);
			else if (!sign)
				return (-1);
		}
	}
	return ((int)result);
}

int			ft_atoi(const char *str)
{
	unsigned int	result;
	int				sign;

	result = 0;
	sign = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\r' || *str == '\f')
		str++;
	if (*str == '+' || *str == '-')
	{
		sign = *str == '-';
		str++;
	}
	result = calcul(str, sign);
	if (sign)
		return (-result);
	return (result);
}
