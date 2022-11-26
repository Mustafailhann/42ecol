/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <muilhan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:46:24 by muilhan           #+#    #+#             */
/*   Updated: 2022/10/27 22:25:00 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] <= 13 && str[i] >= 9))
	{
		i++;
	}
	if ((str[i] == 45 || str[i] == 43) && str[i])
	{	
		if (str[i] == 45)
		{
			sign *= -1;
		}
	i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
	nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	return (nb * sign);
}
