/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <muilhan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:53:15 by muilhan           #+#    #+#             */
/*   Updated: 2022/12/03 17:43:42 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_unit(unsigned int a)
{
	if (a > 9)
		return (ft_print_unit(a / 10) + ft_putchar(a % 10 + '0'));
	return (ft_putchar(a + '0'));
}

int	ft_print_str(char *s)
{
	if (!s)
		return (ft_print_str("(null)"));
	if (!*s)
		return (0);
	return (ft_putchar(*s) + ft_print_str(s + 1));
}

int	ft_print_hex(unsigned int a, const char format)
{
	if (a > 15)
		return (ft_print_hex(a / 16, format) + ft_print_hex(a % 16, format));
	if (format == 'x')
		return (ft_putchar("0123456789abcdef"[a]));
	return (ft_putchar("0123456789ABCDEF"[a]));
}
