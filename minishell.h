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

#endif