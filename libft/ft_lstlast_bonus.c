/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:22:15 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/16 18:07:21 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*cnode;

	if (lst == NULL)
		return ((void *)0);
	cnode = lst;
	while (cnode != NULL)
	{
		if (cnode->next == NULL)
			return (cnode);
		cnode = cnode->next;
	}
	return (cnode);
}
