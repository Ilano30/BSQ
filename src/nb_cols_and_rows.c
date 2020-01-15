/*
** EPITECH PROJECT, 2019
** nb_cols_and_rows.c
** File description:
** nb_cols_and_rows.c
*/

#include "my.h"

char *nb_rows(char const *buffer)
{
    char *number;
    int i = 0;
    int len = 0;

    while (buffer[len] != '\n')
        len++;
    number = malloc(sizeof(char) * (len + 1));
    while (buffer[i] != '\n') {
        number[i] = buffer[i];
        i++;
    }
    number[i] = '\0';
    return (number);
}

int nb_cols(char const *buffer)
{
    int i = my_strlen(nb_rows(buffer)) + 1;
    int cols = 0;

    while (buffer[i] != '\n') {
        cols++;
        i++;
    }
    return (cols);
}
