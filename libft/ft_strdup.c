/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 09:44:18 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/18 10:58:54 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	size;

	size = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return ((void *)0);
	ft_strlcpy(ptr, s1, (size + 1));
	return (ptr);
}

/*#include <stdio.h>

int	main(void)
{
	char 	s1[] = "Computer programming";
	char	*s2;

	s2 = ft_strdup(s1);
	if (!s2)
		printf("Memory allocation failed, aborted!");
	else
		printf("Original string: %s\nCopied string: %s\n", s1, s2);
	free(s2);
	return (0);
}*/
