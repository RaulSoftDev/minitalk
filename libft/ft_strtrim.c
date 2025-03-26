/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:42:07 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/18 11:41:50 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ckchar(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ret;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return ((void *)0);
	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && ft_ckchar(*start, set))
		++start;
	while (start < end && ft_ckchar(*(end - 1), set))
		--end;
	ret = ft_substr(start, 0, end - start);
	return (ret);
}

/*#include <stdio.h>

int	main(void)
{
	char 	s1[] = "Computer programming";
	char	s2[] = "Cg";
	char	*res;

	printf("Original: %s\n", s1);
	res = ft_strtrim(s1, s2);
	if (!res)
		printf("Failed to allocate memory!! Aborted");
	else
		printf("Result: %s\n", res);
	free(res);
	return (0);
}*/
