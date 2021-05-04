/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnatsak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:52:19 by hmnatsak          #+#    #+#             */
/*   Updated: 2021/02/03 15:52:44 by hmnatsak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (src[i])
	{
		if (i + 1 < size)
		{
			*dest = src[i];
			dest++;
		}
		i++;
	}
	if (size == 0)
		return (i);
	*dest = '\0';
	return (i);
}
