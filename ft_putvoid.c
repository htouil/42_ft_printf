/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 23:16:10 by htouil            #+#    #+#             */
/*   Updated: 2022/12/26 19:54:47 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_addhexalpha(int a)
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
	return (1);
}

static int	ft_addhexlow(unsigned long long lo)
{
	int	i;

	i = 0;
	if (lo >= 16)
	{
		i += ft_addhexlow(lo / 16);
		i += ft_addhexlow(lo % 16);
	}
	if (lo >= 0 && lo <= 9)
		i += ft_putnbruns(lo);
	if (lo >= 10 && lo <= 15)
		i += ft_addhexalpha(lo);
	return (i);
}

int	ft_putvoid(void *v)
{
	int	i;

	ft_putchar('0');
	ft_putchar('x');
	i = 2;
	i += ft_addhexlow((unsigned long long) v);
	return (i);
}
