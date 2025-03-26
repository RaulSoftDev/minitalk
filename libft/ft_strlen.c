/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:29:15 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/17 19:58:44 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	char	s[] = "Computer programming";

	printf("String: %s\n", s);
	printf("Length: %lu\n", ft_strlen(s));
	printf("Size in memory: %lu\n", sizeof(s));
	return (0);
}*/
