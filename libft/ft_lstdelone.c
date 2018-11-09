/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 15:18:01 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/24 14:49:34 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst == NULL || del == NULL || (*alst)->content == NULL)
		return ;
	del((*alst)->content, (*alst)->content_size);
	if (*alst != NULL)
	{
		free(*alst);
		*alst = NULL;
	}
}
