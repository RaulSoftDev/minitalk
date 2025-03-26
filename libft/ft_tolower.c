/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:03:19 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/17 20:07:45 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

/*#include <stdio.h>

int	main(void)
{
	size_t	i;
	char s[] = "COMPUTER PROGRAMMING";

	i = 0;
	printf("Original string: %s\n", s);
	printf("Modified string: ");
	while (s[i])
	{
		printf("%c", ft_tolower(s[i]));
		i++;
	}
	printf("\n");
	return (0);
}*/
