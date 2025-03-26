/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:46:11 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/17 20:13:33 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (unsigned char)c)
	{
		if (s[i] == '\0')
			return ((void *)0);
		i++;
	}
	return ((char *)&s[i]);
}

/*#include <stdio.h>

int	main(void)
{
	char 	s[] = "Computer programming";
	char	c;

	c = 't';
	printf("String: %s\n", s);
	printf("%c iteration: %s\n", c, ft_strchr(s, c));
	return (0);
}*/
