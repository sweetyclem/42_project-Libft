/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:21:18 by cpirlot           #+#    #+#             */
/*   Updated: 2017/11/08 14:18:52 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	if (ft_strlen(s1) == 0)
		return (NULL);
	i = 0;
	j = 0;
	if (s2[j] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && len > 0)
	{
		while (len > 0 && s1[i] == s2[j])
		{
			i++;
			j++;
			if (s2[j] == '\0')
				return (char *)s1 + (i - ft_strlen(s2));
		}
		j = 0;
		i++;
		len--;
	}
	return (NULL);
}
