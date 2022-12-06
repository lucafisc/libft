/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:20:03 by lde-ross          #+#    #+#             */
/*   Updated: 2022/12/01 16:10:04 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t slen;
	size_t dlen;
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (dstsize <= dlen)
		return (dstsize + slen);
	while (*dst && dstsize > 0)
	{
		dst++;
		dstsize--;
	}
	while (*src && dstsize > 1)
	{
		*dst = *src;
		dstsize--;
		dst++;
		src++;
	}
	*dst = '\0';
	return (slen + dlen);
}
