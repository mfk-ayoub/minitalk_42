/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 23:26:10 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/12/02 10:42:53 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	long	n;
	int		count;

	n = nbr;
	count = 0;
	if (n < 0)
	{
		count += ft_putchr('-');
		n = -n;
	}
	if (n >= 10)
	{
		count += ft_putnbr(n / 10);
	}
	count += ft_putchr(n % 10 + '0');
	return (count);
}
