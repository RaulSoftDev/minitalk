/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:20:37 by rahidalg          #+#    #+#             */
/*   Updated: 2024/05/02 19:32:41 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <limits.h>

static int	ft_nbrlen(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_putnbr_pf(int n, int fd)
{
	ft_putnbr_fd(n, fd);
	return (ft_nbrlen(n));
}
/*int	main()
{
	int	fd;

	fd = open("nbr.txt", O_WRONLY);
	ft_putnbr_fd(INT_MAX, fd);
	return (0);
}*/
