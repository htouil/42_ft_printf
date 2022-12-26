/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 18:40:03 by htouil            #+#    #+#             */
/*   Updated: 2022/12/25 22:58:22 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *to_display, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putvoid(void *v);
int	ft_putnbr(int n);
int	ft_putnbruns(unsigned int un);
int	ft_puthexlow(unsigned int lo);
int	ft_puthexhigh(unsigned int hi);

#endif
