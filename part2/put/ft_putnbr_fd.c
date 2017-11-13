/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvillepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 21:39:18 by yvillepo          #+#    #+#             */
/*   Updated: 2017/11/12 21:48:11 by yvillepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	affiche_nombre(char *nbr, int fd)
{
	int i;

	i = 0;
	while (nbr[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		i--;
		ft_putchar_fd(nbr[i], fd);
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	char		nombre[20];
	int			i;

	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
	}
	if (n == 0)
		ft_putchar('0');
	while (n != 0)
	{
		if (n < 0)
			nombre[i] = '0' - (n % 10);
		else
			nombre[i] = '0' + (n % 10);
		n = n / 10;
		i++;
	}
	nombre[i] = '\0';
	affiche_nombre(nombre, fd);
}
