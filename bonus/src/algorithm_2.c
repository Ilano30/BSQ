/*
** EPITECH PROJECT, 2019
** algorithm_2.c
** File description:
** algorithm_2.c
*/

#include "my.h"
#include "bsq.h"

int biggest_number(map_info map)
{
    int bigger_nb = 0;

    for (int i = 0; i != map.rows; i++) {
        for (int j = 0; j != map.cols; j++)
            if (map.arr[i][j] > bigger_nb)
                bigger_nb = map.arr[i][j];
    }
    return (bigger_nb);
}

int get_i(map_info map, int nb)
{
    for (int i = 0; i != map.rows; i++) {
        for (int j = 0; j != map.cols; j++)
            if (map.arr[i][j] == nb)
                return (i);
    }
    return (0);
}

int get_j(map_info map, int nb)
{
    for (int i = 0; i != map.rows; i++) {
        for (int j = 0; j != map.cols; j++)
            if (map.arr[i][j] == nb)
                return (j);
    }
    return (0);
}

map_info algorithm_2(map_info map)
{
    int nb = biggest_number(map);
    int i = get_i(map, nb);
    int j = get_j(map, nb);

    for (int a = i - (nb - 1); a <= i; a++) {
        for (int b = j - (nb - 1); b <= j; b++)
            map.tab[a][b] = 'x';
    }
    return (map);
}
