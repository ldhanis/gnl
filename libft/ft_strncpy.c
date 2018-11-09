/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 14:42:01 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/08 19:56:31 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t src_len;
	size_t i;

	i = 0;
	src_len = ft_strlen(src);
	while (i < len)
	{
		if (i > src_len)
			*(dst + i) = 0;
		else
			*(dst + i) = *(src + i);
		i++;
	}
	return (dst);
}
