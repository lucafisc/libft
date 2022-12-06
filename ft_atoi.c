/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 09:32:50 by lde-ross          #+#    #+#             */
/*   Updated: 2022/11/29 09:34:04 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char x)
{
	if (x == '\t' || x == '\n' || x == '\v' ||
		x == '\f' || x == '\r' || x == ' ')
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
	int	i;
	int	sign;
	int	result;

	if (!str)
		return (0);
	i = 0;
	result = 0;
	sign = 1;
	while (is_space(str[i]))
	{
		i++;
	}
	if (is_sign(str[i]))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
