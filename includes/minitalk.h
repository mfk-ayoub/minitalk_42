/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 06:36:50 by ayel-mou          #+#    #+#             */
/*   Updated: 2024/03/10 11:33:11 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "../ft_printf/ft_printf.h"
# include <signal.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_pow(int base, int exp);
int		_atoi(const char *str);
void	_errors(char *str);
void	_putbanner(int pid, char *str);
void	_putcolor(char color);

#endif
