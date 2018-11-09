/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:06:12 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/23 15:27:12 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *str, int c, size_t len)
{
	unsigned int	i;
	char			*deref;

	deref = str;
	i = 0;
	while (i < len)
	{
		deref[i] = c;
		i++;
	}
	return (deref);
}
