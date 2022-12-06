/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:25:58 by lde-ross          #+#    #+#             */
/*   Updated: 2022/11/30 19:06:11 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	char 		*pt_d;
	const char	*pt_s;
	size_t 		i;
	pt_d = dst;
	pt_s = src;
	i = 0;
	while (i < n)
	{
		pt_d[i] = pt_s[i];
		i++;
	}
	return (dst);
}
