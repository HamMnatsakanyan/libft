/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnatsak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:45:07 by hmnatsak          #+#    #+#             */
/*   Updated: 2021/02/03 16:01:05 by hmnatsak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		length(int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i = 1;
		n = n * -1;
	}
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		l;
	int		m;
	long	nbr;

	m = 0;
	nbr = n;
	l = length(nbr);
	str = malloc(l * sizeof(char) + 1);
	if (str == NULL)
		return (0);
	str[l] = '\0';
	if (nbr < 0)
	{
		m = 1;
		nbr = nbr * -1;
	}
	while (l--)
	{
		str[l] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (m)
		str[0] = '-';
	return (str);
}
