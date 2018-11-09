/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:03:19 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/22 18:03:56 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*monstring;
	size_t	i;

	if (s == NULL)
		return (NULL);
	monstring = ft_strnew(ft_strlen(s));
	if (monstring != NULL && f != NULL)
	{
		i = 0;
		while (s[i])
		{
			monstring[i] = f((unsigned int)i, (char)s[i]);
			i++;
		}
	}
	return (monstring);
}
