/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:07:37 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/17 19:46:44 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
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

	c = 'a';
	if (ft_isalnum(c))
		printf("The char %c is alphanumeric\n", c);
	else
		printf("The char %c is not alphanumeric\n", c);
	return (0);
}*/
