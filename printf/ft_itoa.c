/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <muilhan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:48:23 by muilhan           #+#    #+#             */
/*   Updated: 2022/11/26 13:56:35 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_step(int a)
{
	int	i;

	i = 0;
	if (a <= 0)
		i = 1;
	while (a != 0)
	{
		a = a / 10;
		i++;
	}
	return (i);
}

void	ft_convert(char *str, int b, int len, int k)
{
	while (len > k)
	{
		str[len -1] = ((b % 10) + 48);
		b = b / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		control;
	int		size;

	control = 0;
	size = ft_step(n);
	str = ((char *)malloc(sizeof(char) * (size + 1)));
	if (!str)
		return (NULL);
	if (n == -2147483648)
	{
		control = 2;
		*(str + 1) = '2';
		*(str + 0) = '-';
		n = 147483648;
	}
	if (n < 0)
	{
		control = 1;
		*(str + 0) = '-';
		n = -n;
	}
	str[size] = 0;
	ft_convert (str, n, size, control);
	return (str);
}
