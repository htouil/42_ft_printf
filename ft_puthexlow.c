/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 23:04:36 by htouil            #+#    #+#             */
/*   Updated: 2022/12/26 19:29:38 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthexalpha(int a)
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

int	ft_puthexlow(unsigned int lo)
{
	int	i;

	i = 0;
	if (lo >= 16)
	{
		i += ft_puthexlow(lo / 16);
		i += ft_puthexlow(lo % 16);
	}
	if (lo >= 0 && lo <= 9)
		i += ft_putnbruns(lo);
	if (lo >= 10 && lo <= 15)
		i += ft_puthexalpha(lo);
	return (i);
}
