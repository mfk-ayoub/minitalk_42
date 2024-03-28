/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putbanner.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 03:42:12 by ayel-mou          #+#    #+#             */
/*   Updated: 2024/03/11 17:51:10 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

void	_putbanner(int pid, char *str)
{
	ft_printf("\n");
	ft_printf("\033[34m");
	ft_printf("⠀⢰⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	ft_printf("⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	ft_printf("⠀\033[34m⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀\033[1;33m⣶⣶⣶⣶⣶⣶⣶⡆⠀\n");
	ft_printf("⠀\033[34m⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀\033[1;33m⣿⣿⣿⣿⣿⣿⣿⡇⠀\n");
	ft_printf("⠀\033[34m⢸⣿⣿⣿⣿⣧⣤⣿⣿⣧⣼⣿⣿⣤⣿⣿⣿⣿⣿⠀\033[1;33m⣿⣿⣿⣿⣿⣿⣿⡇⠀\n");
	ft_printf("⠀\033[34m⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀\033[1;33m⣿⣿⣿⣿⣿⣿⣿⡇⠀\n");
	ft_printf("⠀\033[34m⠈⠉⠉⠉⢹⣿⣿⡿⠋⣉⣉⣉⣉⣉⣉⣉⣉⣉⣉⣀\033[1;33m⣿⣿⣿⣿⣿⣿⣿⡇⠀\n");
	ft_printf("⠀⠀⠀\033[34m⠀⠀⠈⣿⡟⠁⠀\033[1;33m⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀\n");
	ft_printf("⠀⠀⠀⠀⠀\033[34m⠀⠛⠀⠀⠀\033[1;33m⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⢿⣿⣿⡏⠉⠉⠉⠁⠀\n");
	ft_printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\033[1;33m⠀⠀⠈⢻⣿⠁⠀⠀⠀⠀⠀\n");
	ft_printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\033[1;33m⠀⠛⠀⠀⠀⠀⠀⠀\n");
	ft_printf("\033[1;34m<ayel-mou>\t\t\t");
	ft_printf("\033[1;34m%s", str);
	ft_printf("\n\n\t\t\tPID: \033[1;33m[ %d ]\n", pid);
	ft_printf("\033[0m\n");
}

void	_putcolor(char color)
{
	if (color == 'r')
		ft_printf("\033[1;31m");
	else if (color == 'g')
		ft_printf("\033[1;32m");
	else if (color == 'b')
		ft_printf("\033[1;34m");
	else
		ft_printf("\033[0m");
}

size_t	ft_strlen(const char *str)
{
	size_t	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}
