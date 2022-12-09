/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:36:39 by lde-ross          #+#    #+#             */
/*   Updated: 2022/12/09 12:21:21 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pt;
	size_t	i;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	pt = malloc(sizeof(char) * len + 1);
	if (!pt)
		return (0);
	i = 0;
	while (i < len)
	{
		pt[i] = s[start];
		start++;
		i++;
	}
	pt[i] = '\0';
	return (pt);
}

// int main(void)
// {
// 	char str[] = "Hello eveyone";
// 	char *my_str = ft_substr(str, 50, 20);
// 	printf("%s", my_str);
// }