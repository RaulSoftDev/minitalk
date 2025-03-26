/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:01:38 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/16 17:59:35 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*tmp;
	t_list	*mapped_content;

	if (!lst || !f || !del)
		return ((void *)0);
	nlist = NULL;
	while (lst)
	{
		mapped_content = f(lst->content);
		tmp = ft_lstnew(mapped_content);
		if (!(tmp))
		{
			del(mapped_content);
			ft_lstclear(&nlist, del);
			return ((void *)0);
		}
		ft_lstadd_back(&nlist, tmp);
		lst = lst->next;
	}
	return (nlist);
}
