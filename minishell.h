#ifndef MINISHELL_H
#define MINISHEL_H

#include "libft/includes/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include <dirent.h>
# include <sys/wait.h>
# include <limits.h>
# include <errno.h>
# include <signal.h>

# define BUFF_SIZE 4096

typedef enum e_exit
{
    SUCCESS,
    FAILURE
} t_exit;
        
typedef enum e_std
{
    STDIN,
    STDOUT,
    STDERR
} t_std;
        
typedef struct s_env
{
    char            *value;
    struct s_env    *next;
}   t_env;

typedef struct s_mini
{
    t_env *env;
    t_env *secret_env;
    int ret;
    int exit;
} t_mini;

//BUILT-INS
//ECHO
int ft_echo(char **args);

//ENV
int ft_env(t_env *env);

//EXIT
void ft_exit(t_mini *mini, char **cmd);

//PWD
int ft_pwd(void);

//EXPORT
int env_add(const char *value, t_env *env);
char *get_env_name(char *dest, const char *src);
int is_in_env(t_env *env, char *args);
int ft_export(char **args, t_env *env, t_env *secret);

//CD
int ft_cd(char **args, t_env *env);







#endif