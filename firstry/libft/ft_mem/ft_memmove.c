/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaduan-b <aaduan-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 01:14:25 by aaduan-b          #+#    #+#             */
/*   Updated: 2023/01/23 01:14:26 by aaduan-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*q;
	unsigned char	temp[len];

	i = 0;
	p = (unsigned char *)dst;
	q = (unsigned char *)src;
	while (i < len)
	{
		temp[i] = q[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		p[i] = temp[i];
		i++;
	}
	return (dst);
}