/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:46:54 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/17 20:44:04 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		*(unsigned char *)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}

/*#include <stdio.h>

int	main(void)
{
	char 	s[] = "Computer programming";
	printf("Original: %s\n", s);
	ft_memset(s, '*', 10);
	printf("Modified buffer data: %s\n", s);
	return (0);
}*/
