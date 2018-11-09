/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 15:43:51 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/24 15:37:46 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t			ft_count_n_size(int n)
{
	size_t	count;

	count = 1;
	if (n == 0)
		return (count);
	if (n < 0)
		count++;
	while (n /= 10)
		count++;
	return (count);
}

static unsigned int		ft_expo(unsigned int i)
{
	if (i > 1)
		return (ft_expo(--i) * 10);
	return (1);
}

char					*ft_itoa(int n)
{
	char	*ret;
	size_t	string_size;
	size_t	start;
	int		power;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	string_size = ft_count_n_size(n);
	if ((ret = ft_strnew(string_size)))
	{
		start = 0;
		if (n < 0)
		{
			ret[start++] = '-';
			string_size--;
			n *= -1;
		}
		while (string_size)
		{
			power = ft_expo(string_size--);
			ret[start++] = (n / power) + '0';
			n = n - (n / power) * power;
		}
	}
	return (ret);
}
