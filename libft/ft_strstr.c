/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 17:13:25 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/24 15:01:02 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) > ft_strlen(haystack))
		return (NULL);
	if (needle[0] == '\0')
		return ((char*)(haystack));
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char*)(haystack + i));
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
