/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:12:04 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/17 19:44:57 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
	if (ft_isdigit(c))
		printf("The char %c is a number\n", c);
	else
		printf("The char %c is not a number\n", c);
	return (0);
}*/
