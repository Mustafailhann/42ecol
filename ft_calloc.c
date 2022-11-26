/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <muilhan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:21:15 by muilhan           #+#    #+#             */
/*   Updated: 2022/11/16 15:27:21 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	total = size * count;
	ptr = malloc(total);
	if (!ptr)
		return (0);
	while (total != 0)
	{
		((unsigned char *)ptr)[total - 1] = 0;
		total--;
	}
	return (ptr);
}
