/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnatsak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:50:22 by hmnatsak          #+#    #+#             */
/*   Updated: 2021/02/03 15:53:57 by hmnatsak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if ((char)str[i] == (char)c)
		{
			return ((char *)(str + i));
		}
		i--;
	}
	return (NULL);
}
