/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 23:16:10 by htouil            #+#    #+#             */
/*   Updated: 2022/12/25 23:10:43 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_addhexalpha(int a)
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

static int	ft_addhexlow(unsigned long long lo)
{
	int	i;

	i = 0;
	if (lo >= 16)
	{
		ft_addhexlow(lo / 16);
		ft_addhexlow(lo % 16);
	}
	if (lo >= 0 && lo <= 9)
		i += ft_putnbruns(lo);
	else
	{
		ft_addhexalpha(lo);
		i++;
	}
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
