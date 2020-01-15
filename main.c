/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main.c
*/

#include "my.h"
#include "bsq.h"

void bsq(char const *filepath)
{
    char *buffer;
    int **arr;
    char **tab;
    int rows = 0;
    int cols = 0;

    buffer = open_read_file(filepath);
    rows = my_getnbr(nb_rows(buffer));
    cols = nb_cols(buffer);
    arr = malloc_2d_array(buffer);
    tab = malloc_2d_tab(buffer);
    fill_tab(arr, buffer);
    fill_tab_char(tab, buffer);
    algorithm_1(arr, rows, cols);
    algorithm_2(tab, arr, rows, cols);
    put_tab_char(tab, rows, cols);
}

int main(int ac, char **av)
{
    if (open_read_file(av[1]) == NULL || ac == 1)
        return (84);
    else if (error_1(av[1]) == -1 ||
            error_2(av[1]) == -1 ||
            error_3(av[1]) == -1)
        return (84);
    else
        bsq(av[1]);
    return (0);
}
