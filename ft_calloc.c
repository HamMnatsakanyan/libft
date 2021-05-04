/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnatsak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:43:56 by hmnatsak          #+#    #+#             */
/*   Updated: 2021/02/03 15:43:59 by hmnatsak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t m)
{
	size_t	i;
	void	*str;

	i = n * m;
	str = malloc(i);
	if (!str)
	{
		return (NULL);
	}
	ft_bzero(str, i);
	return (str);
}
