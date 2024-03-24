#include "push_swap.h"
#include <stdio.h>

char *merge_arguments(int argc, char **argv)
{
    char *line;
    char *to_free;

    line = NULL;
    while (argc > 1 )
    {
        to_free = line;
        line = ft_strjoin(argv[argc - 1], line);
        free(to_free);
        to_free = line;
        line = ft_strjoin(" ", line);
        free(to_free);
        argc--;
    }
    return line;
}

int main(int argc, char **argv)
{
    char *line;
    if (argc == 1)
        ft_putstr_fd("Error\n", 2);
    else
        line = merge_arguments(argc, argv);
    printf("%s", line);
    return (0);
}