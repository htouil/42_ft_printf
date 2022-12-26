/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 18:45:11 by htouil            #+#    #+#             */
/*   Updated: 2022/12/25 23:58:17 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_displayf(const char c, va_list thing)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(thing, int));
	if (c == 's')
		count += ft_putstr(va_arg(thing, char *));
	if (c == 'p')
		count += ft_putvoid(va_arg(thing, void *));
	if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(thing, int));
	if (c == 'u')
		count += ft_putnbruns(va_arg(thing, unsigned int));
	if (c == 'x')
		count += ft_puthexlow(va_arg(thing, unsigned int));
	if (c == 'X')
		count += ft_puthexhigh(va_arg(thing, unsigned int));
	if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *to_display, ...)
{
	int		i;
	int		j;
	va_list	thing;

	va_start(thing, to_display);
	i = 0;
	j = 0;
	while (to_display[j] != '\0')
	{
		if (to_display[j] == '%')
			i += ft_displayf(to_display[++j], thing);
		else
			i += ft_putchar(to_display[j]);
		j++;
	}
	va_end(thing);
	return (i);
}
