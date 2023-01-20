/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  aaduan-b < aaduan-b@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:33:13 by  aaduan-b           #+#    #+#             */
/*   Updated: 2022/02/06 15:38:11 by  aaduan-b          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_power(int nbr, int pow)
{
	int	res;

	if (pow == 0)
		return (1);
	res = nbr;
	while (pow > 1)
	{
		res *= nbr;
		pow--;
	}
	return (res);
}
