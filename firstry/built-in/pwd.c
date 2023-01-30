/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaduan-b <aaduan-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:38:41 by aaduan-b          #+#    #+#             */
/*   Updated: 2023/01/23 16:38:42 by aaduan-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int ft_pwd(void)
{
    char cwd[PATH_MAX];

    if (getcwd(cwd, PATH_MAX))
    {
        ft_putendl_fd(cwd, 1);
        return (SUCCESS);
    }
    else
        return(FAILURE);
}