/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 13:08:30 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/18 12:20:08 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*out;

	if (!s)
		return ((void *)0);
	i = 0;
	out = malloc((ft_strlen(s) + 1) * sizeof (*out));
	if (!out)
		return ((void *)0);
	while (s[i])
	{
		out[i] = f(i, s[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}

/*#include <stdio.h>

char	f(unsigned int index, char c)
{
	char	l;

	l = ft_toupper(c);
	printf("Index %d: %c --> %c\n", index, c, l);
	return (l);
}

int	main(void)
{
	char	s[] = "Computer programming";
	char	*p = ft_strmapi(s, f);

	if (!p)
		printf ("Memory allocation failed!! Aborted\n");
	else
	{
		printf("Result: %s", p);
	}
	free(p);
	return (0);
}*/
