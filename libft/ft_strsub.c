/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:20:57 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/22 19:47:33 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*monstring;
	unsigned int	i;

	monstring = (char *)malloc(sizeof(char) * (len + 1));
	if (s != NULL && monstring != NULL)
	{
		i = 0;
		while (i < len)
		{
			monstring[i] = (char)s[start + i];
			i++;
		}
		monstring[i] = '\0';
	}
	return (monstring);
}
