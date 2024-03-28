/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 06:49:12 by ayel-mou          #+#    #+#             */
/*   Updated: 2024/03/24 11:00:33 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

void	_print_output(int sig, siginfo_t *siginfo, void *ucontext)
{
	static int	i;
	static char	c;
	static int	pid;

	(void)ucontext;
	if (!pid)
		pid = siginfo->si_pid;
	else if (pid != siginfo->si_pid)
	{
		c = 0;
		i = 0;
	}
	if (sig == SIGUSR1)
		c += 1 << i;
	else if (sig == SIGUSR2)
		c += 0;
	i++;
	if (i == 8)
	{
		ft_printf("%c", c);
		i = 0;
		c = 0;
	}
	if (c == '\0' || pid != siginfo->si_pid)
		pid = 0;
}

int	main(int ac, char **av)
{
	struct sigaction	sa;
	pid_t				pid;

	(void)av;
	if (ac != 1)
		_errors("[!] Syntax Error \n");
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_SIGINFO | SA_RESTART;
	sa.sa_sigaction = &_print_output;
	pid = getpid();
	_putbanner(pid, "[*] mandatory part");
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		_errors("[!] Invalid Signal");
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
		_errors("[!] Invalid Signal");
	while (1)
		pause();
	return (0);
}
