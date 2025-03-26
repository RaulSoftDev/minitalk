/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:24:00 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/18 09:55:26 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hs_tmp;
	char	*nd_tmp;
	size_t	i;

	i = len - ft_strlen(needle) + 1;
	if (needle[0] == '\0')
		return ((char *)haystack);
	else if (!ft_strlen(haystack) || len < ft_strlen(needle))
		return ((void *)0);
	while (i > 0 && *haystack)
	{
		hs_tmp = (char *)haystack;
		nd_tmp = (char *)needle;
		while (*nd_tmp && *nd_tmp == *hs_tmp)
		{
			hs_tmp++;
			nd_tmp++;
		}
		if (!*nd_tmp)
			return ((char *)haystack);
		i--;
		haystack++;
	}
	return ((void *)0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char 	s1[] = "Test de prueba";
	char	s2[] = "Test no de prueba";
	size_t	n;

	n = 8;
	printf("Original: %s\n", strnstr(s1, s2, n));
	printf("Own: %s\n", ft_strnstr(s1, s2, n));
	return (0);
}*/
