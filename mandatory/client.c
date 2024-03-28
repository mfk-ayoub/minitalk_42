/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 06:49:09 by ayel-mou          #+#    #+#             */
/*   Updated: 2024/03/11 10:23:40 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

void	_send_char(int pid, char c)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (c % 2 == 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		c = c / 2;
		i++;
		usleep(500);
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
	char	*_msg;
	pid_t	_pid;

	_pid = _atoi(av[1]);
	if (ac != 3)
		_errors("[!] Missing Arguments \n");
	if (_pid <= 0)
		_errors("[!] Invalid Process Id\n");
	_msg = av[2];
	_sender(_pid, _msg);
	_sender(_pid, "\n");
	_sender(_pid, "\0");
	return (0);
}
