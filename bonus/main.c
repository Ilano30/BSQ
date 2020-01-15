/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main.c
*/

#include "my.h"
#include "bsq.h"

map_info init_struct(char const *filepath)
{
    map_info map;

    map.square = 0;
    map.buffer = open_read_file(filepath);
    map.rows = my_getnbr(nb_rows(map.buffer));
    map.cols = nb_cols(map.buffer);
    map.arr = malloc_2d_array(map.buffer);
    map.tab = malloc_2d_tab(map.buffer);
    map = fill_tab(map);
    map = fill_tab_char(map);
    algorithm_1(map);
    algorithm_2(map);
    return (map);
}

void create_color(void)
{
    start_color();
    init_pair(DOT, COLOR_WHITE, COLOR_WHITE);
    init_pair(CIRCLE, COLOR_WHITE, COLOR_WHITE);
    init_pair(CROSS, 8, 12);
    init_pair(BORDER, 9, 9);
    init_pair(TITLE, 8, 12);
}

void bsq(char *filepath)
{
    map_info map = init_struct(filepath);
    int input = 0;

    initscr();
    noecho();
    curs_set(0);
    create_color();
    while (input != 32) {
        clear();
        put_tab_char(map);
        input = getch();
    }
    refresh();
    endwin();
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
