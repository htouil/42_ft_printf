/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexhigh.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 23:05:47 by htouil            #+#    #+#             */
/*   Updated: 2022/12/26 19:42:22 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthexalpha(int a)
{
	if (a == 10)
		ft_putchar('A');
	else if (a == 11)
		ft_putchar('B');
	else if (a == 12)
		ft_putchar('C');
	else if (a == 13)
		ft_putchar('D');
	else if (a == 14)
		ft_putchar('E');
	else if (a == 15)
		ft_putchar('F');
	return (1);
}

int	ft_puthexhigh(unsigned int hi)
{
	int	i;

	i = 0;
	if (hi >= 16)
	{
		i += ft_puthexhigh(hi / 16);
		i += ft_puthexhigh(hi % 16);
	}
	if (hi >= 0 && hi <= 9)
		i += ft_putnbr(hi);
	if (hi >= 10 && hi <= 15)
		i += ft_puthexalpha(hi);
	return (i);
}
