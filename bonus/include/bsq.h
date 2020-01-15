/*
** EPITECH PROJECT, 2019
** bsq.h
** File description:
** bsq.h
*/

#ifndef __BSQ_H__
#define __BSQ_H__

#include <curses.h>
#include <math.h>

#define DOT    1
#define CIRCLE 2
#define CROSS  3
#define BORDER 4
#define TITLE  5

typedef struct map_info_t
{
    char *buffer;
    char **tab;
    int **arr;
    int rows;
    int cols;
    int square;
}map_info;

char *open_read_file(char const *filepath);
int **malloc_2d_array(char const *buffer);
char **malloc_2d_tab(char const *buffer);
char *nb_rows(char const *buffer);
int nb_cols(char const *buffer);
map_info fill_tab(map_info map);
map_info fill_tab_char(map_info map);
void put_tab_char(map_info map);
map_info algorithm_1(map_info map);
map_info algorithm_2(map_info map);
int biggest_number(map_info map);
int get_i(map_info map, int nb);
int get_j(map_info map, int nb);
int error_1(char const *filepath);
int error_2(char const *filepath);
int error_3(char const *filepath);

#endif /*__BSQ_H__*/
