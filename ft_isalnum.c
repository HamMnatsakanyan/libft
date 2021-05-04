/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnatsak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:44:08 by hmnatsak          #+#    #+#             */
/*   Updated: 2021/02/03 15:44:11 by hmnatsak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int arg)
{
	if ((arg >= 48 && arg <= 57) ||
			(arg >= 65 && arg <= 90) || (arg >= 97 && arg <= 122))
	{
		return (1);
	}
	else
		return (0);
}