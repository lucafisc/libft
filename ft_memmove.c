/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:33:31 by lde-ross          #+#    #+#             */
/*   Updated: 2022/12/01 16:14:40 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char		*pt_d;
	const char	*pt_s;
	size_t 		i;
	pt_d = dst;
	pt_s = src;
	if (pt_d > pt_s)
	{
		i = len;
		while (i > 0)
		{
			pt_d[i - 1] = pt_s[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			pt_d[i] = pt_s[i];
			i++;			
		}	
	}
	return (dst);
}

// int main ()
// {
//   char str[] = "memmove can be very useful......";
//   ft_memmove (str+20,str+15,11);
//   return 0;
// }