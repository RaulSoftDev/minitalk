/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:20:05 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/18 13:02:19 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;
	char	c;

	i = 0;
	c = '\n';
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, &c, 1);
}

/*#include <stdio.h>
#include <fcntl.h>

int	main()
{
	int	fd;

	fd = 1;
	ft_putendl_fd("Computer programming", fd);
	return (0);
}*/
