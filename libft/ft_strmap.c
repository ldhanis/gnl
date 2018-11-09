/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 16:41:20 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/22 18:03:41 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
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
			monstring[i] = f((char)s[i]);
			i++;
		}
	}
	return (monstring);
}
