/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:57:01 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/17 21:50:37 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	size_t	op;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (*(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i)
			&& i < (n - 1))
	{
		i++;
	}
	op = *(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i);
	return (op);
}

/*#include <stdio.h>

int	main(void)
{
	char 	s1[] = "Test";
	char	s2[] = "Test";
	size_t	n;

	n = 5;
	if (ft_memcmp(s1, s2, n) < 0)
		printf("S1 is lower than S2\n");
	else if (ft_memcmp(s1, s2, n) > 0)
		printf("S1 is greater than S2\n");
	else
		printf("Both strings are equal\n");
	return (0);
}*/
