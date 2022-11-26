/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <muilhan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:27:30 by muilhan           #+#    #+#             */
/*   Updated: 2022/11/14 15:13:42 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*array;

	if (!lst || !del)
		return ;
	while ((*lst))
	{
		array = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = array;
	}
}
