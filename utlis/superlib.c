/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   superlib.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 06:40:37 by ayel-mou          #+#    #+#             */
/*   Updated: 2024/03/24 11:00:20 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

void	_errors(char *str)
{
	_putcolor('r');
	ft_printf("%s", str);
	exit(1);
}

bool	_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

static bool	_is_space(char c)
{
	char	*str;

	str = "\t\n\v\f\r ";
	while (*str)
	{
		if (*str == c)
			return (true);
		str++;
	}
	return (false);
}

int	_atoi(const char *str)
{
	int	_ans;
	int	_result;

	_ans = 0;
	_result = 1;
	if (str == NULL)
		_errors("[!] Missing Arguments \n");
	while (_is_space(*str))
		str++;
	if (*str == '-')
		_result = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str)
	{
		if (_isdigit(*str))
		{
			_ans = (_ans * 10) + (*str - '0');
			str++;
		}
		else
			_errors("[!] Invalid Process Id\n");
	}
	return (_result * _ans);
}
