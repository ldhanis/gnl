/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 15:37:53 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/22 18:08:12 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char		*deref;
	size_t		i;

	deref = (char*)malloc(sizeof(char) * (1 + size));
	if (deref != NULL)
	{
		i = 0;
		while (i <= size)
		{
			*(deref + i) = '\0';
			i++;
		}
	}
	return (deref);
}
