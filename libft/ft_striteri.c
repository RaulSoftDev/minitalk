/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 14:18:24 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/18 12:53:55 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>

void	f(unsigned int index, char *c)
{
	char	l;

	l = *c;
	*c = ft_toupper(*c);
	printf("Index %d: %c --> %s\n", index, l, c);
}

int	main(void)
{
	char	s[] = "Computer programming";
	ft_striteri(s, f);

	printf("Result: %s", s);
	return (0);
}*/
