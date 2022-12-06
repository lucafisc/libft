/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:14:19 by lde-ross          #+#    #+#             */
/*   Updated: 2022/11/30 19:06:36 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char *pt;
	i = 0;
	pt = s;
	while (i < n)
	{
		pt[i] = '\0';
		i++;
	}
}