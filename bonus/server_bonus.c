/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 00:29:04 by ayel-mou          #+#    #+#             */
/*   Updated: 2024/03/28 16:03:06 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk_bonus.h"

void	_print_output(int sig, siginfo_t *siginfo, void *ucontext)
{
	static int	bit;
	static int	i;
	static int	mask;

	(void)ucontext;
	mask = 0x01;
	if (sig == SIGUSR1)
		i |= (mask << bit);
	else if (sig == SIGUSR2)
		i += 0;
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
	if (kill(siginfo->si_pid, SIGUSR1) == -1)
		_errors("[!] Kill Not Working");
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
	_putbanner(pid, "[*] bonus part");
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		_errors("[!] Invalid Signal");
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
		_errors("[!] Invalid Signal");
	while (1)
		pause();
	return (0);
}
