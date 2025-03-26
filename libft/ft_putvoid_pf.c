/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:15:19 by rahidalg          #+#    #+#             */
/*   Updated: 2024/05/02 19:15:23 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print_void(char *s, size_t type, int fd)
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

static size_t	ft_uldigits(unsigned long n)
{
	size_t	i;

	i = 0;
	while (n)
	{
		n /= 16;
		i++;
	}
	return (i);
}

static void	ft_ptrtostr(unsigned long n, char *s)
{
	unsigned long	tmp;
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

int	ft_putvoid_pf(unsigned long n, size_t type, int fd)
{
	size_t	size;
	char	*out;

	if ((void *)n == NULL)
	{
		size = ft_putstr_pf("(nil)", 1);
		return (size);
	}
	size = ft_uldigits(n);
	out = (char *)malloc(sizeof(char) * (size + 1));
	ft_ptrtostr(n, out);
	out[size] = '\0';
	size += ft_putstr_pf("0x", 1);
	ft_print_void(out, type, fd);
	free(out);
	return (size);
}
