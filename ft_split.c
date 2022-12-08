/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:46:28 by lde-ross          #+#    #+#             */
/*   Updated: 2022/12/08 09:58:04 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != c && s[i + 1]) || (i == 0 && s[i] != c))
			count++;
		i++;
	}
	return (count);
}

int	is_new_word(char const *s, char c, int i)
{
	if ((s[i] != c && s[i - 1] == c) || (i == 0 && s[i] != c))
		return (1);
	return (0);
}

size_t	strnlen(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**arr;
	int		i;
	int		j;
	int		len;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	arr = malloc(sizeof(char *) * words + 1);
	if (!arr)
		return (0);
	i = -1;
	j = 0;
	while (s[++i])
	{
		if (is_new_word(s, c, i))
		{
			len = strnlen(s + i, c);
			arr[j] = ft_substr(s, i, len);
			j++;
		}
	}
	arr[words] = NULL;
	return (arr);
}

// int	main(void)
// {
// 	char my_str[] = "Hello";
// 	char **ar;
// 	ar = ft_split(my_str, ' ');
// 	printf("%s\n", ar[0]);
// 	printf("%s\n", ar[1]);
// 	// printf("%s\n", ar[2]);
// 	// printf("%s\n", ar[3]);
// 	// printf("%s\n", ar[4]);
// 	// printf("%s\n", ar[5]);
// 	// printf("%s\n", ar[6]);
// }