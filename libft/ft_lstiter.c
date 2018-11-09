/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 15:50:22 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/23 15:25:01 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *iterator;

	if (lst == NULL || f == NULL)
		return ;
	iterator = lst;
	while (iterator != NULL)
	{
		lst = iterator->next;
		f(iterator);
		iterator = lst;
	}
}
