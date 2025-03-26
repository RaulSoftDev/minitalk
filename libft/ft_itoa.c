/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:27:46 by rahidalg          #+#    #+#             */
/*   Updated: 2024/04/18 12:00:35 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(int nbr)
{
	size_t	count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

static void	ft_revstr(char *s)
{
	size_t	i;
	size_t	j;
	char	c;

	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
		i++;
		j--;
	}
}

static void	ft_setnbr(int n, char *s, size_t sign)
{
	size_t	i;

	i = 0;
	while (n)
	{
		s[i] = (n % 10) + '0';
		i++;
		n /= 10;
	}
	if (sign)
	{
		s[i] = '-';
		i++;
	}
	s[i] = '\0';
	ft_revstr(s);
}

static char	*stcnbr(int n)
{
	if (n == -2147483648)
	{
		return ("-2147483648");
	}
	else if (n == 0)
	{
		return ("0");
	}
	return ((void *)0);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	sign;

	sign = 0;
	if (n == -2147483648 || n == 0)
	{
		s = ft_strdup(stcnbr(n));
		return (s);
	}
	if (n < 0)
	{
		sign = 1;
		n *= -1;
		s = malloc((ft_nbrlen(n) + 2) * sizeof(*s));
	}
	else
		s = malloc((ft_nbrlen(n) + 1) * sizeof(*s));
	if (!s)
		return ((void *)0);
	ft_setnbr(n, s, sign);
	return (s);
}

/*#include <stdio.h>
#include <limits.h>

int main()
{
	char	*n1;
	char	*n2;
	char	*n3;
	char	*n4;

	n1 = ft_itoa(56731);
	n2 = ft_itoa(-32648);
	n3 = ft_itoa(INT_MAX);
	n4 = ft_itoa(INT_MIN);
	printf("%s\n", n1);
	printf("%s\n", n2);
	printf("%s\n", n3);
	printf("%s\n", n4);
	free(n1);
	free(n2);
	free(n3);
	free(n4);
	return (0);
}*/
