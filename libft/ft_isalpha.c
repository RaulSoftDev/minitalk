/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:32:42 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/17 19:45:22 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*#include <stdio.h>

int	main(void)
{
	char	c;

	c = '0';
	if (ft_isalpha(c))
		printf("The char %c is alphabetic\n", c);
	else
		printf("The char %c is not alphabetic\n", c);
	return (0);
}*/
