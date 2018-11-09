/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:40:29 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/23 13:15:58 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespace(char c)
{
	if (c == 32 || c == 10 || c == 9 || c == 12 || c == 13 || c == 11)
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int					i;
	int					mult;
	unsigned long long	total;

	mult = 1;
	i = 0;
	while (is_whitespace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			mult = -1;
		i++;
	}
	total = 0;
	while (str[i] && str[i] <= '9' && str[i] >= '0')
		total = total * 10 + str[i++] - 48;
	if (total > 9223372036854775807)
		return ((mult == -1) ? 0 : -1);
	return (mult * total);
}
