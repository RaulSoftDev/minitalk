/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:14:22 by rahidalg          #+#    #+#             */
/*   Updated: 2024/05/02 19:14:29 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_unbrlen(unsigned int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_printunbr(unsigned int n, int fd)
{
	if (n >= 10)
	{
		ft_printunbr((n / 10), fd);
		ft_printunbr((n % 10), fd);
	}
	else
	{
		ft_putchar_fd((n + '0'), fd);
	}
}

int	ft_putunbr_pf(unsigned int n, int fd)
{
	size_t	out;

	out = ft_unbrlen(n);
	ft_printunbr(n, fd);
	return (out);
}
