/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:54:50 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/23 15:25:59 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*deref_dest;
	unsigned char		*deref_src;

	deref_src = (unsigned char *)src;
	deref_dest = (unsigned char *)dest;
	while (n-- > 0)
	{
		*deref_dest = *deref_src;
		if (*deref_src == ((unsigned char)c))
			return (++deref_dest);
		deref_dest++;
		deref_src++;
	}
	return (0);
}
