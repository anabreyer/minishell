/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaduan-b <aaduan-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:38:35 by aaduan-b          #+#    #+#             */
/*   Updated: 2023/01/23 18:07:56 by aaduan-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int ft_env(t_env *env)
{
    while (env && env->next != NULL)
    {
        ft_putendl(env->value);
        env = env->next;
    }
    if (env)
        ft_putendl(env->value);
    return (SUCCESS);
}

