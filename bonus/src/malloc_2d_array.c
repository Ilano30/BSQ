/*
** EPITECH PROJECT, 2019
** malloc_2d_array.c
** File description:
** malloc_2d_array.c
*/

#include "my.h"
#include "bsq.h"

int **malloc_2d_array(char const *buffer)
{
    int **arr;
    int rows = my_getnbr(nb_rows(buffer));
    int cols = nb_cols(buffer);
    int i = 0;

    arr = malloc(sizeof(int *) * rows);
    for (i = 0; i != rows; i++)
        arr[i] = malloc(sizeof(int) * cols);
    arr[i] = NULL;
    return (arr);
}

char **malloc_2d_tab(char const *buffer)
{
    char **tab;
    int rows = my_getnbr(nb_rows(buffer));
    int cols = nb_cols(buffer);
    int i = 0;

    tab = malloc(sizeof(char *) * rows);
    for (i = 0; i != rows; i++)
        tab[i] = malloc(sizeof(char) * cols);
    tab[i] = NULL;
    return (tab);
}
