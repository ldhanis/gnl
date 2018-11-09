/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:43:44 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/23 15:26:30 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long	i;
	unsigned char	*deref_dest;
	const char		*deref_src;

	deref_dest = dest;
	deref_src = src;
	i = 0;
	while (i < n)
	{
		deref_dest[i] = deref_src[i];
		i++;
	}
	return (deref_dest);
}
