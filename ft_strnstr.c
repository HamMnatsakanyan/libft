/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnatsak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:50:08 by hmnatsak          #+#    #+#             */
/*   Updated: 2021/02/03 15:50:10 by hmnatsak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;

	j = ft_strlen(s2);
	i = 0;
	if (s2 == NULL || j == 0)
		return ((char *)s1);
	if (j > n)
		return (NULL);
	while (i < n)
	{
		if (ft_strncmp((char *)&s1[i], s2, j) == 0)
		{
			if (i + j > n)
				return (NULL);
			return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
