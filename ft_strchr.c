/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnatsak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:48:45 by hmnatsak          #+#    #+#             */
/*   Updated: 2021/02/03 15:48:47 by hmnatsak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
	}
	if (str[i] == c)
	{
		return ((char *)(str + i));
	}
	else
		return (NULL);
}
