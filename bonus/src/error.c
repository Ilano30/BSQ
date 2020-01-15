/*
** EPITECH PROJECT, 2019
** error.c
** File description:
** error.c
*/

#include "my.h"
#include "bsq.h"

int error_1(char const *filepath)
{
    char *buffer;

    buffer = open_read_file(filepath);
    if (my_strcmp(buffer, "") == 0) {
        my_putstr("Error: Empty File !\n");
        return (-1);
    }
    free(buffer);
    return (0);
}

int error_2(char const *filepath)
{
    char *buffer;
    int rows_1 = 0;
    int rows_2 = 0;
    int i = 0;

    buffer = open_read_file(filepath);
    rows_1 = my_getnbr(nb_rows(buffer));
    i = my_strlen(nb_rows(buffer)) + 1;
    while (buffer[i] != '\0') {
        if (buffer[i] == '\n')
            rows_2++;
        i++;
    }
    if (rows_2 != rows_1) {
        my_putstr("Error : Invalid size of rows !\n");
        return (-1);
    }
    free(buffer);
    return (0);
}

int error_3_function(int rows, int first_row)
{
    if (rows != first_row) {
        my_putstr("Error : Invalid Size of Columns\n");
        return (-1);
    }
    return (0);
}

int error_3(char const *filepath)
{
    char *buffer = open_read_file(filepath);
    int i = my_strlen(nb_rows(buffer)) + 1;
    int first_row = 0;
    int rows = 0;

    while (buffer[i] != '\n') {
        first_row++;
        i++;
    }
    i++;
    for (int j = i; buffer[j] != '\0'; j++) {
        if (buffer[j] == '\n') {
            if (error_3_function(rows, first_row) == -1)
                return (-1);
            rows = -1;
        }
        rows++;
    }
    free(buffer);
    return (0);
}
