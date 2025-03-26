/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:01:03 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/18 11:54:13 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_array(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (0);
}

static size_t	ft_arrlen(const char *s, char c)
{
	size_t	out;

	out = 0;
	while (*s)
	{
		if (*s != c)
		{
			out++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (out);
}

static char	**ft_checkstr(char **out, const char *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && s++)
				len++;
			out[i] = ft_substr(s - len, 0, len);
			if (!out[i])
			{
				free_array(out, i);
				return ((void *)0);
			}
			i++;
		}
		else
			s++;
	}
	out[i] = NULL;
	return (out);
}

char	**ft_split(const char *s, char c)
{
	char	**out;

	if (!s)
		return ((void *)0);
	out = malloc((ft_arrlen(s, c) + 1) * sizeof(char *));
	if (!out)
	{
		return ((void *)0);
	}
	return (ft_checkstr(out, s, c));
}

/*#include <stdio.h>

int	main()
{
	size_t	i;
	char	**ar;

	i = 0;
	ar = ft_split("hello!", 'l');
	while (ar[i])
	{
		printf("%s\n", ar[i]);
		i++;
	}
	if (!ar[i])
		printf("Last string in array is NULL\n");
	free_array(ar, i);
	return (0);
}*/
