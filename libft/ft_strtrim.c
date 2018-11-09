/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:29:34 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/22 18:08:46 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_is_ws(char s)
{
	if (s == ' ' || s == '\n' || s == '\t')
		return (1);
	return (0);
}

char				*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	len;

	if (!s)
		return (NULL);
	start = 0;
	while (ft_is_ws(s[start]))
		start++;
	if (s[start] == '\0')
		return (ft_strdup(s + start));
	len = ft_strlen(s) - 1;
	while (ft_is_ws(s[len]) && len > 0)
		len--;
	return (ft_strsub(s, start, len - start + 1));
}
