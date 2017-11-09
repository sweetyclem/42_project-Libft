/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:06:43 by cpirlot           #+#    #+#             */
/*   Updated: 2017/11/09 07:21:01 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*skip_whitespace(const char *str)
{
	const char	*s;

	s = str;
	while ((*s >= 9 && *s <= 13) || *s == 32)
		s++;
	return (s);
}

int					ft_atoi(const char *str)
{
	unsigned int	res;
	int				sign;
	int				max;
	const char		*s;

	sign = 1;
	res = 0;
	max = 0;
	s = skip_whitespace(str);
	if (*s == '-' && s++)
		sign = -1;
	else if (*s == '+' && sign != -1)
		s++;
	while (*s >= '0' && *s <= '9')
	{
		res *= 10;
		res += (*s++ - '0');
		max++;
	}
	if (max > 18 && sign == 1)
		return (-1);
	if (max > 18 && sign == -1)
		return (0);
	return (res * sign);
}
