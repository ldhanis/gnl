/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freechararr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:05:14 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/24 15:40:45 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_freechararr(char **arr, size_t size)
{
	size_t i;

	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (arr[i] != NULL)
			free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	return (NULL);
}
