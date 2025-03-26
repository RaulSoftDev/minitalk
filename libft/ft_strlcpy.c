/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:55:25 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/18 10:23:51 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	out;

	i = 0;
	out = ft_strlen(src);
	if (size != 0)
	{
		while ((i < out) && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (out);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char 	s1[] = "Computer";
	char	s2[] = "Texto muy largo";
	size_t	n;

	n = sizeof(s1);
	if (ft_strlcpy(s1, s2, n) >=  n)
		printf("Cannot copy the string, not enough space!");
	else
		printf("Result: %s\n", s1);
	return (0);
}*/
