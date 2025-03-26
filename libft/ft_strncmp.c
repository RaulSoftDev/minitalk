/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:03:59 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/17 20:29:40 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		op;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < (n - 1))
	{
		i++;
	}
	op = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (op);
}

/*#include <stdio.h>

int	main(void)
{
	char 	s1[] = "Test";
	char	s2[] = "Tost";
	size_t	n;

	n = 5;
	if (ft_strncmp(s1, s2, n) < 0)
		printf("S1 is lower than S2\n");
	else if (ft_strncmp(s1, s2, n) > 0)
		printf("S1 is greater than S2\n");
	else
		printf("Both strings are equal\n");
	return (0);
}*/
