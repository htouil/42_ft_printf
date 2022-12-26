/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 22:56:44 by htouil            #+#    #+#             */
/*   Updated: 2022/12/26 12:34:38 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s == NULL)
		write(1, "NULL", 4);
	else
	{
		while (s[j] != '\0')
		{
			i += ft_putchar(s[j]);
			j++;
		}
	}
	return (i);
}