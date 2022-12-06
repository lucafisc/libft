/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:36:39 by lde-ross          #+#    #+#             */
/*   Updated: 2022/12/01 16:14:19 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *pt;
	size_t i;
	pt = malloc(sizeof(char) * len);
	if (!pt)
		return (0);
	i = 0;
	while (i < len)
	{
		pt[i] = s[start];
		start++;
		i++;
	}
	return (pt);		
}

// int main(void)
// {
// 	char str[] = "How are you?";
// 	char *my_str = ft_substr(str, 4, 3);
// 	printf("%s", my_str);
// }
