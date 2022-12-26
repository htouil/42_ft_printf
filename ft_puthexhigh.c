/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexhigh.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 23:05:47 by htouil            #+#    #+#             */
/*   Updated: 2022/12/25 23:04:29 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthexalpha(int a)
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
}

int	ft_puthexhigh(unsigned int hi)
{
	int	i;

	i = 0;
	if (hi >= 16)
	{
		ft_puthexhigh(hi / 16);
		ft_puthexhigh(hi % 16);
	}
	if (hi >= 0 && hi <= 9)
	{
		ft_putnbr(hi);
		i++;
	}
	else
	{
		ft_puthexalpha(hi);
		i++;
	}
	return (i);
}
