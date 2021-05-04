/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnatsak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:47:12 by hmnatsak          #+#    #+#             */
/*   Updated: 2021/02/03 15:47:16 by hmnatsak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int val, size_t len)
{
	unsigned char *ptr;

	ptr = (unsigned char*)dest;
	while (len > 0)
	{
		*ptr++ = val;
		len--;
	}
	return (dest);
}
