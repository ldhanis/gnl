/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 16:01:18 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/23 15:27:04 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*deref_src;
	unsigned char	*deref_dest;
	size_t			i;

	deref_src = (unsigned char*)src;
	deref_dest = dest;
	if (dest > src)
	{
		while (n-- > 0)
			*(deref_dest + n) = *(deref_src + n);
	}
	else
	{
		i = -1;
		while (++i < n)
			*(deref_dest + i) = *(deref_src + i);
	}
	return (dest);
}
