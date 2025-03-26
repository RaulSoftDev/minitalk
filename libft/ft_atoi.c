/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 09:53:42 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/18 11:32:41 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	while (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
	{
		return (1);
	}
	return (0);
}

static int	ft_isnumber(char c)
{
	while (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	ne;
	int	nb;

	i = 0;
	ne = 1;
	nb = 0;
	while (ft_isspace(str[i]))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			ne *= -1;
		i++;
		break ;
	}
	while (ft_isnumber(str[i]))
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * ne);
}

/*#include <stdio.h>

int	main(void)
{
	char 	s[20] = " 	-39678./fka5412";

	printf("Original: %d\n", atoi(s));
	printf("Own: %d\n", ft_atoi(s));
	return (0);
}*/
