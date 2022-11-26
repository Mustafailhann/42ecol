/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <muilhan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:37:08 by okirca            #+#    #+#             */
/*   Updated: 2022/10/27 22:31:41 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*src2;
	size_t	i;

	i = 0;
	dest = (char *)dst;
	src2 = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (src2 < dest)
		while (++i <= len)
			dest[len - i] = src2[len - i];
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}
