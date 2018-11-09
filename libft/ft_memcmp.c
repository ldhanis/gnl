/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 13:54:33 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/23 15:26:20 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char *deref_str1;
	unsigned char *deref_str2;

	deref_str2 = (unsigned char*)str2;
	deref_str1 = (unsigned char*)str1;
	while (n--)
	{
		if (*deref_str1 != *deref_str2)
			return (*deref_str1 - *deref_str2);
		deref_str1++;
		deref_str2++;
	}
	return (0);
}
