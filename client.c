/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:06:54 by rahidalg          #+#    #+#             */
/*   Updated: 2025/02/27 10:07:06 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_cl_data	g_cl_sigdata;

void	ft_send_string(pid_t pid_init, char *message_init)
{
	int				signal;
	int				zeroes;

	if (pid_init)
		g_cl_sigdata.pid = pid_init;
	if (message_init)
		g_cl_sigdata.message = message_init;
	if (g_cl_sigdata.current_bit % 8 == 0)
		zeroes = 0;
	if (g_cl_sigdata.message[g_cl_sigdata.current_bit / 8]
		& (0x01 << (g_cl_sigdata.current_bit % 8)))
		signal = SIGUSR1;
	else
	{
		signal = SIGUSR2;
		zeroes++;
	}
	g_cl_sigdata.current_bit++;
	usleep(0x80);
	if (kill(g_cl_sigdata.pid, signal) || zeroes == 8)
		exit(0);
}

void	ft_handler(int signal)
{
	if (signal == SIGUSR2)
		ft_send_string(0, NULL);
	if (signal == SIGUSR1)
		exit(-1);
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		ft_printf("Sintax error!\n\nUsage: %s <pid> <message>\n", argv[0]);
		exit(0);
	}
	g_cl_sigdata.current_bit = 0;
	g_cl_sigdata.pid = 0;
	g_cl_sigdata.message = NULL;
	signal(SIGUSR1, &ft_handler);
	signal(SIGUSR2, &ft_handler);
	ft_send_string(ft_atoi(argv[1]), argv[2]);
	while (1)
		pause();
	return (0);
}
