/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 15:34:14 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/24 14:50:00 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *iterator;
	t_list *next;

	if (alst == NULL || del == NULL)
		return ;
	iterator = *alst;
	while (iterator != NULL)
	{
		next = iterator->next;
		ft_lstdelone(&iterator, del);
		iterator = next;
	}
	*alst = NULL;
}
