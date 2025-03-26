/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:02:06 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/17 21:43:19 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t count)
{
	size_t	i;

	i = 0;
	if (dst == src || !count)
		return (dst);
	while (i < count)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}

/*#include <stdio.h>

int	main(void)
{
	char 	s1[20] = "Computer programming";
	char	s2[20] = "";
	size_t	n;

	n = ft_strlen(s1);
	printf("Original: %s\n", s1);
	ft_memcpy(s2, s1, n);
	printf("Copied string: %s\n", s2);
	return (0);
}*/
