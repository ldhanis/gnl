/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 16:51:19 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/24 15:15:10 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list_start;
	t_list	*iterator;

	if (lst == NULL || f == NULL)
		return (NULL);
	list_start = f(lst);
	iterator = list_start;
	while (lst->next != NULL)
	{
		lst = lst->next;
		if (!(iterator->next = f(lst)))
		{
			ft_lstdel(&list_start, ft_delnode);
			return (NULL);
		}
		else
			iterator = iterator->next;
	}
	return (list_start);
}
