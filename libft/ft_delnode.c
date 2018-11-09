/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 14:39:14 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/24 15:41:10 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_delnode(void *element, size_t size)
{
	t_list *deref;

	if (element != NULL)
	{
		size = 0;
		deref = (t_list *)element;
		if (deref->content != NULL)
			free(deref->content);
		if (deref->next != NULL)
			deref->next = NULL;
		free(element);
	}
}
