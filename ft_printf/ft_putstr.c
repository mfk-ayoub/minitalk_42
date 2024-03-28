/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 22:04:10 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/12/02 10:41:36 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	index;

	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	index = 0;
	while (str[index])
	{
		ft_putchr(str[index]);
		++index;
	}
	return (index);
}
