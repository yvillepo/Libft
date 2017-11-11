/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvillepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:08:32 by yvillepo          #+#    #+#             */
/*   Updated: 2017/11/11 14:01:43 by yvillepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
/*
static	int	Max_int(void)
{
	int		n;
	int		res;

	n = sizeof(int);
	if (n == 4)
		return (2147483647);
	if (n == 2)
		return(32767);
	if (n == 8)
		return (9223372036854775807);
}
*/
int			ft_atoi(const char *str)
{
	unsigned int	digit;
	int				result;
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
	while (*str)
	{
		digit = *str - '0';
		str++;
		if (digit > 9)
			break ;
		result = (result * 10) + digit;
	}
	if (sign)
		return (-result);
	return (result);
}
