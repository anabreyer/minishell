/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  aaduan-b < aaduan-b@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:22:24 by  aaduan-b           #+#    #+#             */
/*   Updated: 2022/02/06 15:38:11 by  aaduan-b          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\r')
		return (1);
	else if (c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}