/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <muilhan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:35:11 by muilhan           #+#    #+#             */
/*   Updated: 2022/11/14 15:03:33 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!s1 && !n)
		return (NULL);
	if (*s2 == 0)
		return ((char *)s1);
	while (s1[i] != 0)
	{
		j = 0;
		while (s2[j] == s1[i + j] && s2[j] != 0 && n > (j + i))
		{
			if (s2[j + 1] == 0)
				return (((char *)s1) + i);
			j++;
		}
		i++;
	}
	return (0);
}
