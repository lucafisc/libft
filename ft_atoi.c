/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 09:32:50 by lde-ross          #+#    #+#             */
/*   Updated: 2022/12/07 19:42:04 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char x)
{
	if (x == '\t' || x == '\n' || x == '\v'
		|| x == '\f' || x == '\r' || x == ' ')
		return (1);
	else
		return (0);
}

int	is_sign(char x)
{
	if (x == '-' || x == '+')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	result = 0;
	while (is_space(*str))
		str++;
	sign = 1;
	if (is_sign(*str))
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}
