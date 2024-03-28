/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:12:40 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/12/02 10:48:44 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putstr(char *str);
int	ft_putnbr(int nbr);
int	ft_putchr(char c);
int	ft_printhex(unsigned int hex);
int	ft_print_hex_upper(size_t hex);
int	ft_printpoint(unsigned long point);
int	ft_putundec(unsigned int nbr);

#endif
