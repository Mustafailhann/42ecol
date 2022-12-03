/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coal2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <muilhan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:29:09 by muilhan           #+#    #+#             */
/*   Updated: 2022/12/03 16:43:47 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_pt(unsigned long long a)
{
	if (a >= 16)
	{
		ft_print_pt((a / 16));
		ft_print_pt((a % 16));
	}
	else
	{
		if (a <= 9)
			ft_putchar (a + 48);
		else
			ft_putchar (a - 10 + 'a');
	}
}

int	ft_print_ptr(unsigned long long a)
{
	int	i;

	i = 0;
	write(1, "0x", 2);
	ft_print_pt(a);
	if (a == 0)
		return (3);
	while (a > 0)
	{
		a = a / 16;
		i++;
	}
	return (i + 2);
}

int	ft_print_int(int c)
{
	int		i;
	char	*s;

	s = ft_itoa(c);
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	free (s);
	return (i);
}
