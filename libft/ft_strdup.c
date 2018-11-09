/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 14:10:20 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/22 18:01:49 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char *dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (dest)
	{
		ft_strcpy(dest, s1);
	}
	return (dest);
}
