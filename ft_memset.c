/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:00:01 by lde-ross          #+#    #+#             */
/*   Updated: 2022/11/30 19:06:04 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int c, size_t len)
{
	char			*pt;
	unsigned int	i;
	pt = str;
	i = 0;
	while (i < len)
	{
		pt[i] = c;
		i++;
	}
	return (str);
}
