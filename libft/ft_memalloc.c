/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 15:18:37 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/24 15:02:46 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*deref;

	deref = malloc(size * sizeof(char));
	if (deref)
	{
		ft_memset(deref, 0, size);
	}
	return (deref);
}
