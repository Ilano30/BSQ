/*
** EPITECH PROJECT, 2019
** bsq.h
** File description:
** bsq.h
*/

#ifndef __BSQ_H__
#define __BSQ_H__

char *open_read_file(char const *filepath);
int **malloc_2d_array(char const *buffer);
char **malloc_2d_tab(char const *buffer);
char *nb_rows(char const *buffer);
int nb_cols(char const *buffer);
int **fill_tab(int **arr, char *buffer);
char **fill_tab_char(char **tab, char *buffer);
void put_tab(int **arr, int rows, int cols);
void put_tab_char(char **tab, int rows, int cols);
int **algorithm_1(int **arr, int rows, int cols);
char **algorithm_2(char **tab, int **arr, int rows, int cols);
int error_1(char const *filepath);
int error_2(char const *filepath);
int error_3(char const *filepath);

#endif /*__BSQ_H__*/
