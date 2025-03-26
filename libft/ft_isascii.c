/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:18:00 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/17 19:50:45 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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

	c = 163;
	if (ft_isascii(c))
		printf("%c is an ascii char\n", c);
	else
		printf("%c is not an ascii char\n", c);
	return (0);
}*/
