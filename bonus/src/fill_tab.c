/*
** EPITECH PROJECT, 2019
** fill_tab.c
** File description:
** fill_tab.c
*/

#include "my.h"
#include "bsq.h"

map_info fill_tab(map_info map)
{
    int idx = my_strlen(nb_rows(map.buffer)) + 1;

    for (int i = 0; i != map.rows; i++) {
        for (int j = 0; j != map.cols; j++) {
            if (map.buffer[idx] == '.')
                map.arr[i][j] = 1;
            else
                map.arr[i][j] = 0;
            idx++;
        }
        idx++;
    }
    return (map);
}

map_info fill_tab_char(map_info map)
{
    int idx = my_strlen(nb_rows(map.buffer)) + 1;

    for (int i = 0; i != map.rows; i++) {
        for (int j = 0; j != map.cols; j++) {
            map.tab[i][j] = map.buffer[idx];
            idx++;
        }
        idx++;
    }
    return (map);
}
