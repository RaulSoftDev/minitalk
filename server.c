/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:09:02 by rahidalg          #+#    #+#             */
/*   Updated: 2025/02/27 10:09:21 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_sv_data	g_sigdata;

void	ft_handler(int signal, siginfo_t *info, void *context)
{
	static char	nline;

	(void)context;
	nline = '\n';
	if (signal == SIGUSR1)
		g_sigdata.buffer = g_sigdata.buffer
			| (0x01 << g_sigdata.bits_received % 8);
	if (g_sigdata.bits_received % 8 == 7)
	{
		if (g_sigdata.buffer == '\0')
		{
			usleep(42);
			write(1, &nline, 1);
			kill(info->si_pid, SIGUSR1);
		}
		else
			write(1, &g_sigdata.buffer, 1);
		g_sigdata.buffer = 0x0;
	}
	g_sigdata.bits_received++;
	usleep(42);
	kill(info->si_pid, SIGUSR2);
}

int	main(void)
{
	struct sigaction	sa_signal;
	sigset_t			block_mask;

	g_sigdata.bits_received = 0;
	g_sigdata.buffer = 0x0;
	sigemptyset(&block_mask);
	sigaddset(&block_mask, SIGINT);
	sigaddset(&block_mask, SIGQUIT);
	sa_signal.sa_handler = 0;
	sa_signal.sa_flags = SA_SIGINFO;
	sa_signal.sa_mask = block_mask;
	sa_signal.sa_sigaction = &ft_handler;
	sigaction(SIGUSR1, &sa_signal, NULL);
	sigaction(SIGUSR2, &sa_signal, NULL);
	ft_printf("PID: %d\n", getpid());
	while (1)
		pause();
	return (0);
}
