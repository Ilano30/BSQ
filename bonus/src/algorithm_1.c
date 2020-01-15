/*
** EPITECH PROJECT, 2019
** algorithm_1.c
** File description:
** algorithm_1.c
*/

#include "my.h"
#include "bsq.h"

int smallest_number(int **arr, int i, int j)
{
    int x = arr[i][j - 1];
    int y = arr[i - 1][j - 1];
    int z = arr[i - 1][j];

    if (x == y && x == z && y == z)
        return (x + 1);
    if (x <= y && x <= z)
        return (x + 1);
    if (y <= x && y <= z)
        return (y + 1);
    if (z <= x && z <= y)
        return (z + 1);
    return (0);
}

map_info algorithm_1(map_info map)
{
    for (int i = 1; i != map.rows; i++) {
        for (int j = 1; j != map.cols; j++)
            if (map.arr[i][j] != 0)
                map.arr[i][j] = smallest_number(map.arr, i, j);
    }
    return (map);
}
