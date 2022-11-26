/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <muilhan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:53:15 by muilhan           #+#    #+#             */
/*   Updated: 2022/11/26 20:23:05 by muilhan          ###   ########.fr       */
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
	{
		return ((a / 10) + (a % 10 + '0'));
	}
}

int	ft_print_str(char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		ft_putchar(*s++);
		i++;
	}
	return (i);
}

int	ft_print_ptr(unsigned long long a)
{
	if (a > 16)
	{
		ft_print_ptr(a / 16);
		ft_print_ptr(a % 16);
	}
	else
	{
		if (a <= 9)
			ft_putchar(a + 48);
		else
			ft_putchar((a - 10) + 'a');
	}
}
