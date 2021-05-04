/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnatsak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:46:17 by hmnatsak          #+#    #+#             */
/*   Updated: 2021/02/03 15:46:20 by hmnatsak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char		*str1;
	size_t				i;

	str1 = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (((unsigned char*)str1)[i] == (unsigned char)c)
		{
			return (&((unsigned char*)str1)[i]);
		}
		else
		{
			i++;
		}
	}
	return (NULL);
}
