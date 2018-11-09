/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 14:09:58 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/24 15:12:23 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_count_words(const char *str, char c)
{
	int		i;
	int		words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			words++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (words);
}

char				**ft_strsplit(char const *s, char c)
{
	int		i;
	int		word_size;
	char	**arr;

	if (s == NULL)
		return (NULL);
	if (!(arr = (char**)malloc(sizeof(char*) * (ft_count_words(s, c) + 1))))
		return (NULL);
	i = 0;
	while (*s)
	{
		word_size = 0;
		while (*s && *s == c)
			s++;
		if (*s == '\0')
			break ;
		while (s[word_size] && s[word_size] != c)
			word_size++;
		arr[i] = ft_strsub(s, 0, word_size);
		if (arr[i++] == NULL)
			return (ft_freechararr(arr, --i));
		s += word_size;
	}
	arr[i] = NULL;
	return (arr);
}
