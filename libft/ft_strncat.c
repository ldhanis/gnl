/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:21:08 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/08 19:55:49 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t len)
{
	char *deref_s1;

	deref_s1 = s1;
	while (*deref_s1 != '\0')
		deref_s1++;
	while (*s2 != '\0' && len-- > 0)
	{
		*deref_s1 = *s2;
		deref_s1++;
		s2++;
	}
	*deref_s1 = '\0';
	return (s1);
}
