/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 16:33:41 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/23 15:26:11 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *deref;

	deref = (unsigned char*)str;
	while (n--)
	{
		if (*deref == (unsigned char)c)
			return (deref);
		deref++;
	}
	return (0);
}
