/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:49:27 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/17 21:15:52 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	null;

	i = 0;
	null = '\0';
	while (i < n)
	{
		*(unsigned char *)(s + i) = null;
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	char 	s[] = "Computer programming";
	printf("Original: %s\n", s);
	ft_bzero(s, 10);
	if(ft_strlen(s) > 0)
		printf("String buffer not cleared\n");
	else
		printf("String buffer cleared succesfully\n");
	return (0);
}*/
