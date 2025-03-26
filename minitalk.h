/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:08:09 by rahidalg          #+#    #+#             */
/*   Updated: 2025/03/03 13:54:56 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "libft/libft.h"
# include <signal.h>
# include <unistd.h>

typedef struct s_cl_data
{
	int		current_bit;
	pid_t	pid;
	char	*message;
}	t_cl_data;

typedef struct s_sv_data
{
	int		bits_received;
	char	buffer;
}	t_sv_data;

#endif
