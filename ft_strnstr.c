/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:21:18 by cpirlot           #+#    #+#             */
/*   Updated: 2017/11/08 15:38:12 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len2;

	if (!s1)
		return (NULL);
	if (!s2 || !*s2)
		return ((char *)s1);
	i = 0;
	j = 0;
	len2 = len;
	while (s1[i] != '\0' && i <= len)
	{
		while (i <= len && s1[i] == s2[j])
		{
			i++;
			j++;
			if (s2[j] == '\0')
				return (char *)s1 + (i - ft_strlen(s2));
		}
		j = 0;
		i++;
		len2--;
	}
	return (NULL);
}
