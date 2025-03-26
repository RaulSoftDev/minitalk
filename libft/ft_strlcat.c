/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:01:12 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/18 10:32:27 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	out;

	i = 0;
	j = 0;
	out = 0;
	while (dst[i] != '\0')
		i++;
	while (src[out] != '\0')
		out++;
	if (dstsize <= i)
		out += dstsize;
	else
		out += i;
	while (src[j] != '\0' && (i + 1) < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (out);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char 	s1[25] = "Computer";
	char	s2[] = " programming";
	size_t	n;

	n = sizeof(s1);
	if (ft_strlcat(s1, s2, n) >= n)
		printf("Cannot add s2 to s1, there's  not enough space\n");
	else
		printf("Result: %s\n", s1);
	return (0);
}*/
