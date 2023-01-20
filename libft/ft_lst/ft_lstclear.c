/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  aaduan-b <aaduan-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:49:04 by  aaduan-b           #+#    #+#             */
/*   Updated: 2022/08/05 16:27:56 by  aaduan-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*prev;

	if (*lst == NULL || !(current = *lst) || !del)
		return ;
	while (current->next != NULL)
	{
		prev = current;
		del(current->content);
		ft_memdel(current);
		current = prev->next;
	}
	del(current->content);
	ft_memdel(current);
	*lst = NULL;
}
