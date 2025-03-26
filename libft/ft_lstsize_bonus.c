/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:45:33 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/16 18:05:54 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*cnode;
	size_t	i;

	i = 0;
	cnode = lst;
	while (cnode != NULL)
	{
		i++;
		cnode = cnode->next;
	}
	return ((int)i);
}
