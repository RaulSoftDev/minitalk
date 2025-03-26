/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:08:47 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/18 11:19:56 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	size_t	i;
	size_t	p;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (!tmp)
		return ((void *)0);
	i = 0;
	p = 0;
	while (s1[i])
	{
		tmp[i] = s1[i];
		i++;
	}
	while (s2[p])
	{
		tmp[i] = s2[p];
		i++;
		p++;
	}
	tmp[i] = '\0';
	return (tmp);
}

/*#include <stdio.h>

int	main(void)
{
	char	*s1 = "Computer";
	char	*s2 = " programming";

	printf("%s", ft_strjoin(s1, s2));
	return (0);
}*/
