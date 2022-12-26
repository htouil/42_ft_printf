/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbruns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 22:59:07 by htouil            #+#    #+#             */
/*   Updated: 2022/12/25 23:08:21 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbruns(unsigned int un)
{
	int	i;

	i = 0;
	if (un > 9)
	{
		ft_putnbruns(un / 10);
		ft_putnbruns(un % 10);
	}
	else
		i += ft_putchar(un + '0');
	return (i);
}
