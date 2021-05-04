/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnatsak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:46:47 by hmnatsak          #+#    #+#             */
/*   Updated: 2021/02/03 15:46:49 by hmnatsak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t len)
{
	unsigned char *ptr;
	unsigned char *ptr1;

	ptr = (unsigned char *)dest;
	ptr1 = (unsigned char *)src;
	while (len > 0)
	{
		*ptr++ = *ptr1++;
		len--;
	}
	return (dest);
}
