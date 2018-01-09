/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_complex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvillepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 19:55:46 by yvillepo          #+#    #+#             */
/*   Updated: 2018/01/09 20:21:25 by yvillepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_complex		add_complex(t_complex *z1, t_complex *z2)
{
	t_complex	res;
	
	res.r = z1->r + z2->r;
	res.i = z1->i + z2->i;
	return (res);
}

t_complex		mult_complex(t_complex *z1, t_complex *z2)
{
	t_complex	res;

	res.r = z1->r * z2->r - z1->i * z2->i;
	res.i = z1->r * z2->i + z2->r * z1->i;
	return (res);
}

double			mod2(t_complex *z1)
{
	return (z1->r * z1->r + z1->i * z1->i);
}
