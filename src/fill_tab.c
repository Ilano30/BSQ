/*
** EPITECH PROJECT, 2019
** fill_tab.c
** File description:
** fill_tab.c
*/

#include "my.h"
#include "bsq.h"

int **fill_tab(int **arr, char *buffer)
{
    int idx = my_strlen(nb_rows(buffer)) + 1;
    int rows = my_getnbr(nb_rows(buffer));
    int cols = nb_cols(buffer);

    for (int i = 0; i != rows; i++) {
        for (int j = 0; j != cols; j++) {
            if (buffer[idx] == '.')
                arr[i][j] = 1;
            else
                arr[i][j] = 0;
            idx++;
        }
        idx++;
    }
    return (arr);
}

char **fill_tab_char(char **tab, char *buffer)
{
    int idx = my_strlen(nb_rows(buffer)) + 1;
    int rows = my_getnbr(nb_rows(buffer));
    int cols = nb_cols(buffer);

    for (int i = 0; i != rows; i++) {
        for (int j = 0; j != cols; j++) {
            tab[i][j] = buffer[idx];
            idx++;
        }
        idx++;
    }
    return (tab);
}
