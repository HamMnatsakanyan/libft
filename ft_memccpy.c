/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnatsak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:46:08 by hmnatsak          #+#    #+#             */
/*   Updated: 2021/02/03 15:46:10 by hmnatsak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*srcc;
	unsigned char	*dstc;

	i = 0;
	srcc = (unsigned char*)src;
	dstc = (unsigned char*)dst;
	if (n)
	{
		while (i < n)
		{
			dstc[i] = srcc[i];
			if (srcc[i] == (unsigned char)c)
			{
				return (&dstc[i + 1]);
			}
			i++;
		}
	}
	return (NULL);
}
