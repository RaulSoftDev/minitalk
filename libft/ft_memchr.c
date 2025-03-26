/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:29:02 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/17 20:57:33 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return ((void *)0);
}

/*#include <stdio.h>

int	main(void)
{
	char 	s[] = "Computer programming";
	char	c;
	size_t	n;

	c = 'r';
	n = 2;
	printf("Original: %s\n", s);
	if (!((char *)ft_memchr(s, c, n)))
		printf("%c not found in first %lu chars\n", c, n);
	else
		printf("%c iteration: %s\n", c, (char *)ft_memchr(s, c, n));
	return (0);
}*/
