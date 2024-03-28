/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 00:29:21 by ayel-mou          #+#    #+#             */
/*   Updated: 2024/03/28 15:53:22 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk_bonus.h"

int		g_len;

void	recived_msg(int sig)
{
	static int	count;

	if (sig == SIGUSR1)
		count++;
	if (count == g_len)
	{
		_putcolor('g');
		ft_printf("[*] Message was sent successfully !\n");
	}
}

void	_send_char(int pid, char c)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (c & (0x01 << i))
		{
			if (kill(pid, SIGUSR1) == -1)
				_errors("[!] Invalid Process Id \n");
		}
		else
		{
			if (kill(pid, SIGUSR2) == -1)
				_errors("[!] Invalid Process Id\n");
		}
		i++;
		usleep(1000);
	}
}

void	_sender(int pid, const char *str)
{
	while (*str)
	{
		_send_char(pid, *str++);
	}
}

int	main(int ac, char **av)
{
	char				*_msg;
	pid_t				_pid;
	struct sigaction	sa;

	sigemptyset(&sa.sa_mask);
	sa.sa_handler = &recived_msg;
	sa.sa_flags = SA_SIGINFO | SA_RESTART;
	_pid = _atoi(av[1]);
	if (ac != 3)
		_errors("[!] Missing Arguments \n");
	if (_pid <= 0)
		_errors("[!] Invalid Process Id\n");
	sigaction(SIGUSR1, &sa, NULL);
	_msg = av[2];
	g_len = ft_strlen(_msg);
	_sender(_pid, _msg);
	_sender(_pid, "\n");
	_sender(_pid, "\0");
	return (0);
}
