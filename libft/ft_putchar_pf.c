/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:49:40 by rahidalg          #+#    #+#             */
/*   Updated: 2024/05/02 19:50:21 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

int	ft_putchar_pf(int c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

/*int	main()
{
	int	fd;
	fd = open("char.txt", O_WRONLY);
	ft_putchar_fd('c', fd);
	return (0);
}*/
