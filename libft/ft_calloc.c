/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:53:25 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/18 14:22:17 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*#include <stdio.h>

int	main(void)
{
	char 	*s;

	s = (char *)ft_calloc(4, sizeof(char));
	if (!s)
		printf("Memory allocation failed, aborted!!\n");
	else
		printf("Memory allocation successful!!\n");
	free(s);
	return (0);
}*/
