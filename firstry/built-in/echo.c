/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaduan-b <aaduan-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:38:33 by aaduan-b          #+#    #+#             */
/*   Updated: 2023/01/23 16:38:34 by aaduan-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

static int nb_args(char **args)
{
    int nb;

    nb = 0;
    while (args[nb])
        nb++;
    return (nb);
}

int ft_echo(char **args)
{
    int i;
    int n_options;

    i = 1;
    n_options = 0;
    if (nb_args(args) > 1)
    {
        while (args[i] && ft_strcmp(args[i], "-n") == 0)
        {
            n_options = 1;
            i++;
        }
        while (args[i])
        {
            ft_putstr_fd(args[i], 1);
            if (args[i + 1] && args[i][0] != '\0')
                write(1, " ", 1);
            i++;
        }
        if(n_options = 0)
            write(1, "\n", 1);
        return (SUCCESS);
    }
}
