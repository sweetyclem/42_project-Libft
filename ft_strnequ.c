/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:19:43 by cpirlot           #+#    #+#             */
/*   Updated: 2017/11/08 13:48:25 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	if (!s1)
		return (0);
	if (!s2 || n == 0)
		return (1);
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n - 1)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
