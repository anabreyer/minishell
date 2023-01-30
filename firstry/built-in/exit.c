/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaduan-b <aaduan-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:38:37 by aaduan-b          #+#    #+#             */
/*   Updated: 2023/01/23 16:38:38 by aaduan-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void ft_exit(t_mini *mini, char **cmd)
{
    mini->exit = 1;
	ft_putstr_fd("exit ", STDERR);
	//cmd[1] ? ft_putendl_fd("heeart1", STDERR) : ft_putendl_fd("heart2", STDERR);
	if (cmd[1] && cmd[2])
	{
		mini->ret = 1;
		ft_putendl_fd("minishell: exit with too many arguments", STDERR);
	}
	else if (cmd[1] && ft_strisnum(cmd[1]) == 0)
	{
		mini->ret = 255;
		ft_putstr_fd("minishell: exit ", STDERR);
		ft_putstr_fd(cmd[1], STDERR);
		ft_putendl_fd(" numeric argument required", STDERR);
	}
	else if (cmd[1])
		mini->ret = ft_atoi(cmd[1]);
	else
		mini->ret = 0;
}