/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:24:03 by rahidalg          #+#    #+#             */
/*   Updated: 2024/08/24 17:33:02 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

#include "libft.h"

char	*ft_join_buffer(char *prev_buffer, char *new_buffer)
{
	char	*tmp;

	tmp = ft_strjoin(prev_buffer, new_buffer);
	free(prev_buffer);
	return (tmp);
}

char	*read_file(int fd, char *ret)
{
	char	*buffer;
	int		bt_read;

	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	bt_read = 1;
	while (bt_read > 0)
	{
		bt_read = read(fd, buffer, BUFFER_SIZE);
		if (bt_read == -1)
		{
			free(buffer);
			return ((void *)0);
		}
		buffer[bt_read] = '\0';
		if (!ret)
			ret = ft_calloc(1, 1);
		ret = ft_join_buffer(ret, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (ret);
}

char	*ft_next_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return ((void *)0);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')
		line[i++] = '\n';
	return (line);
}

char	*ft_remove_line(char *buffer)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return ((void *)0);
	}
	line = ft_calloc((ft_strlen(buffer) - i + 1), sizeof(char));
	i++;
	j = 0;
	while (buffer[i])
		line[j++] = buffer[i++];
	free(buffer);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return ((void *)0);
	buffer = read_file(fd, buffer);
	if (!buffer)
		return ((void *)0);
	line = ft_next_line(buffer);
	buffer = ft_remove_line(buffer);
	return (line);
}
