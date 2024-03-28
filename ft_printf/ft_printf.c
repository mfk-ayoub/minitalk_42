/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:37:12 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/12/05 04:29:37 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_formate(const char *s, va_list args)
{
	int	i;

	i = 0;
	if (*s == 'c')
		i = ft_putchr(va_arg(args, int));
	else if (*s == 's')
		i = ft_putstr(va_arg(args, char *));
	else if (*s == '%')
		i = ft_putchr('%');
	else if (*s == 'x')
		i = ft_printhex(va_arg(args, unsigned int));
	else if (*s == 'X')
		i = ft_print_hex_upper(va_arg(args, unsigned int));
	else if (*s == 'd' || *s == 'i')
		i = ft_putnbr(va_arg(args, int));
	else if (*s == 'p')
		i = ft_printpoint(va_arg(args, unsigned long));
	else if (*s == 'u')
		i = ft_putundec(va_arg(args, unsigned int));
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	ptr;
	int		lenght;

	va_start(ptr, s);
	lenght = 0;
	if (s == NULL)
		return (-1);
	while (*s)
	{
		if (*s == '%')
		{
			++s;
			if (*s == '\0')
				return (-1);
			lenght += ft_formate(s, ptr);
			++s;
		}
		else
		{
			lenght += ft_putchr(*s);
			++s;
		}
	}
	va_end(ptr);
	return (lenght);
}
