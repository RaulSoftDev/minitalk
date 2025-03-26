/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:13:27 by rahidalg          #+#    #+#             */
/*   Updated: 2024/05/02 19:13:39 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_uintdigits(unsigned int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 16;
		i++;
	}
	return (i);
}

static void	ft_print_revstr(char *s, size_t type, int fd)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		i--;
		if (type)
			s[i] = ft_tolower(s[i]);
		ft_putchar_fd(s[i], fd);
	}
}

static void	ft_hextostr(unsigned int n, char *s)
{
	unsigned int	tmp;
	size_t			i;

	tmp = 0;
	i = 0;
	while (n != 0)
	{
		tmp = n % 16;
		if (tmp < 10)
			tmp = tmp + 48;
		else
			tmp = tmp + 55;
		s[i] = tmp;
		n /= 16;
		i++;
	}
}

int	ft_puthex_pf(unsigned int n, size_t type, int fd)
{
	size_t	size;
	char	*out;

	size = ft_uintdigits(n);
	out = (char *)malloc(sizeof(char) * (size + 1));
	if (n == 0)
		out[0] = '0';
	else
		ft_hextostr(n, out);
	out[size] = '\0';
	ft_print_revstr(out, type, fd);
	free(out);
	return (size);
}
