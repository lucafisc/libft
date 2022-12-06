/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:45:16 by lde-ross          #+#    #+#             */
/*   Updated: 2022/12/01 16:12:27 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	char *pt;
	if (count == 0 || size == 0)
		return (0);
	pt = malloc(count * size);
	if (!pt)
		return (0);
	ft_bzero(pt, count * size);
	return (pt);
}