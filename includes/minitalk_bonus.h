/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 00:29:50 by ayel-mou          #+#    #+#             */
/*   Updated: 2024/03/11 13:21:56 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

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
size_t	ft_strlen(const char *str);

#endif