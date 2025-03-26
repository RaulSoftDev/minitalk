/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:02:45 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/17 20:05:30 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

/*#include <stdio.h>

int	main(void)
{
	size_t	i;
	char s[] = "Computer programming";

	i = 0;
	printf("Original string: %s\n", s);
	printf("Modified string: ");
	while (s[i])
	{
		printf("%c", ft_toupper(s[i]));
		i++;
	}
	printf("\n");
	return (0);
}*/
