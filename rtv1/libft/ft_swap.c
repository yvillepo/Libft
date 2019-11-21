/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvillepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 09:45:22 by yvillepo          #+#    #+#             */
/*   Updated: 2018/01/26 09:45:33 by yvillepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *x1, int *x2)
{
	int	tmp;

	tmp = *x1;
	*x1 = *x2;
	*x2 = tmp;
}
