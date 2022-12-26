/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 23:04:36 by htouil            #+#    #+#             */
/*   Updated: 2022/12/25 23:06:42 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthexalpha(int a)
{
	if (a == 10)
		ft_putchar('a');
	else if (a == 11)
		ft_putchar('b');
	else if (a == 12)
		ft_putchar('c');
	else if (a == 13)
		ft_putchar('d');
	else if (a == 14)
		ft_putchar('e');
	else if (a == 15)
		ft_putchar('f');
}

int	ft_puthexlow(unsigned int lo)
{
	int	i;

	i = 0;
	if (lo >= 16)
	{
		ft_puthexlow(lo / 16);
		ft_puthexlow(lo % 16);
	}
	if (lo >= 0 && lo <= 9)
	{
		ft_putnbruns(lo);
		i++;
	}
	else
	{
		ft_puthexalpha(lo);
		i++;
	}
	return (i);
}
