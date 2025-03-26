/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:58:15 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/17 20:16:11 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*out;

	i = 0;
	out = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			out = (char *)&s[i];
		}
		i++;
	}
	if (!(char)c)
		out = (char *)&s[i];
	return (out);
}

/*#include <stdio.h>

int	main(void)
{
	char 	s[] = "Computer programming";
	char	c;

	c = 'm';
	printf("String: %s\n", s);
	printf("%c iteration: %s\n", c, ft_strrchr(s, c));
	return (0);
}*/
