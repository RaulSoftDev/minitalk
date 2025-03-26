/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:26:54 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/17 19:52:57 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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

	c = 26;
	if (ft_isprint(c))
		printf("The char %c is printable\n", c);
	else
		printf("The char %c is not printable\n", c);
	return (0);
}*/
