/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:48:20 by lde-ross          #+#    #+#             */
/*   Updated: 2022/12/01 11:42:29 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *pt1 = s1;
	const unsigned char *pt2 = s2;

	if (n == 0)
		return (0);
	while (*pt1 && (*pt1 == *pt2) && n - 1 > 0)
	{
		pt1++;
		pt2++;
		n--;
	}
	return (*pt1 - *pt2);
}

// int main(void)
// {
// 	char str1[] = "abC";
// 	char str2[] = "abc";
// 	int i = ft_memcmp(str1, str2, 3);
// 	printf("%d", i);
// }