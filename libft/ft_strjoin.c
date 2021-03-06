/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 13:04:21 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/22 18:03:19 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*monstring;
	size_t	len;
	size_t	i;
	size_t	j;

	if (s1 != NULL && s2 != NULL)
	{
		len = ft_strlen(s1) + ft_strlen(s2) + 1;
		monstring = (char *)malloc(sizeof(char) * len);
		if (monstring)
		{
			i = -1;
			while (s1[++i])
				monstring[i] = s1[i];
			j = -1;
			while (s2[++j])
				monstring[i + j] = s2[j];
			monstring[i + j] = '\0';
		}
		return (monstring);
	}
	return (NULL);
}
