/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 01:42:28 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/12/02 10:40:36 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int hex)
{
	int	count;

	count = 0;
	if (hex < 16)
	{
		count += ft_putchr("0123456789abcdef"[hex % 16]);
		return (count);
	}
	if (hex >= 16)
	{
		count += ft_printhex(hex / 16);
		count += ft_putchr("0123456789abcdef"[hex % 16]);
	}
	return (count);
}
