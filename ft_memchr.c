/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:38:57 by lde-ross          #+#    #+#             */
/*   Updated: 2022/11/30 19:07:52 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const char 		*pt;
	pt = s;
	while (n > 0)
	{
		if (*pt == c)
			return (void *) pt;
		pt++;	
		n--;
	}
	return (0);	
}


