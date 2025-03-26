/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:26:22 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/18 14:39:53 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	while (dst == src || !len)
		return (dst);
	if (src < dst)
	{
		i = len;
		while (i > 0)
		{
			i--;
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>

int main ()
{
  char	s[] = "Computer programming";
  printf("Original: %s\n", s);
  memmove (s, s+9 , 8);
  printf("Result: %s\n", s);
  return 0;
}*/
