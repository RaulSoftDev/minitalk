/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 12:06:33 by rahidalg          #+#    #+#             */
/*   Updated: 2024/05/01 20:15:02 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkpercent(char const *s)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		count = 0;
		while (s[i] == '%')
		{
			count++;
			i++;
		}
		if (count != 1 && count % 2 != 0 && !ft_checkformat(s[i]))
			return (-1);
		if (count == 1 && !ft_checkformat(s[i]))
			return (-1);
		i++;
	}
	return (count);
}

static size_t	ft_countpercent(char *s)
{
	size_t	i;
	size_t	add;

	i = 0;
	add = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			add++;
			if (s[i + 1] == '%')
				s[i + 1] = '.';
		}
		i++;
	}
	return (add);
}

static int	ft_checkstr(char const *s, char **strar, size_t i)
{
	if (s[0] != '%')
	{
		return (ft_putstr_pf(strar[i], 1));
	}
	return (0);
}

static int	ft_printdata(va_list vargs, char **strar, size_t i)
{
	char	*itr;

	itr = strar[i] + 1;
	if (strar[i][0] == 'c')
		return (ft_putchar_pf(va_arg(vargs, int), 1) + ft_putstr_pf(itr, 1));
	else if (strar[i][0] == 's')
		return (ft_putstr_pf(va_arg(vargs, char *), 1) + ft_putstr_pf(itr, 1));
	else if (strar[i][0] == 'i')
		return (ft_putnbr_pf(va_arg(vargs, int), 1) + ft_putstr_pf(itr, 1));
	else if (strar[i][0] == 'd')
		return (ft_putnbr_pf(va_arg(vargs, int), 1) + ft_putstr_pf(itr, 1));
	else if (strar[i][0] == 'u')
		return (ft_putunbr_pf(va_arg(vargs, uint), 1) + ft_putstr_pf(itr, 1));
	else if (strar[i][0] == 'X')
		return (ft_puthex_pf(va_arg(vargs, uint), 0, 1) + ft_putstr_pf(itr, 1));
	else if (strar[i][0] == 'x')
		return (ft_puthex_pf(va_arg(vargs, uint), 1, 1) + ft_putstr_pf(itr, 1));
	else if (strar[i][0] == 'p')
		return (ft_putvoid_pf(va_arg(vargs, unsigned long), 1, 1)
			+ ft_putstr_pf(itr, 1));
	else if (strar[i][0] == '.')
		return (ft_putchar_pf('%', 1) + ft_putstr_pf(itr, 1));
	return (0);
}

int	ft_printf(char const *s, ...)
{
	va_list	vargs;
	char	**strar;
	char	*input;
	size_t	i;
	int		out;

	if (!s || ft_strlen(s) == 0 || ft_checkpercent(s) == -1)
		return (-1);
	i = 0;
	input = ft_strdup(s);
	ft_countpercent(input);
	va_start(vargs, s);
	strar = ft_split(input, '%');
	out = ft_checkstr(s, strar, i);
	if (out != 0)
		i++;
	while (strar[i] && ft_vargscount(s) != 0)
	{
		out += ft_printdata(vargs, strar, i);
		i++;
	}
	free(input);
	ft_freear(strar);
	va_end(vargs);
	return (out);
}

/*#include <stdio.h>
#include <limits.h>

int	main(void)
{
	unsigned int	unbr = 1564178;
	unsigned int	hex = 571;
	char	str[] = "Computer programming";
	void	*ptr = str;
	int		nbr = 89133;
	char	c = 'x';
	int	own = ft_printf("");
	int	ofc = printf("");
	if (own == ofc)
		printf("OK\n");
	else
		printf("FAIL\nOfficial: %d\nOwn: %d\n", ofc, own);
	return (0);
}*/
