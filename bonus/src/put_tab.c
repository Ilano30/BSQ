/*
** EPITECH PROJECT, 2019
** put_tab.c
** File description:
** put_tab.c
*/

#include "bsq.h"
#include "my.h"

void put_stat(map_info map)
{
    int i = 3;
    int square_size = sqrt(map.square);
    int nb = biggest_number(map);
    int x = get_i(map, nb) - (nb - 1);
    int y = get_j(map, nb) - (nb - 1);

    attron(COLOR_PAIR(5) | A_BOLD);
    mvprintw(1, (map.cols / 2) - (7 / 2), " B.S.Q ");
    attroff(COLOR_PAIR(5) | A_BOLD);
    attron(A_BOLD | A_UNDERLINE);
    mvprintw(i, map.cols + 9, "INFORMATIONS");
    attroff(A_BOLD | A_UNDERLINE);
    mvprintw(i + 2, map.cols + 7, "Map Width     : %d", map.cols);
    mvprintw(i + 3, map.cols + 7, "Map Height    : %d", map.rows);
    mvprintw(i + 4, map.cols + 7, "Square size   : %dx%d", square_size, square_size);
    mvprintw(i + 5, map.cols + 7, "Position x, y : %d, %d", x, y);
    mvprintw(i + 8, map.cols + 7, "PRESS SPACE TO EXIT");
}

void put_tab_char(map_info map)
{
    for (int i = 0; i != map.rows; i++)
        for (int j = 0; j != map.cols; j++) {
            if ((i == 0 || i == map.rows - 1 || j == 0 || j == map.cols - 1) && map.tab[i][j] != 'x') {
                attron(COLOR_PAIR(4));
                mvaddch(i + 3, j + 1, map.tab[i][j]);
                attroff(COLOR_PAIR(4));
            }
            else {
                switch (map.tab[i][j]) {
                case '.':
                    attron(COLOR_PAIR(1));
                    mvaddch(i + 3, j + 1, map.tab[i][j]);
                    attroff(COLOR_PAIR(1));
                    break;
                case 'o':
                    attron(COLOR_PAIR(2));
                    mvaddch(i + 3, j + 1, map.tab[i][j]);
                    attroff(COLOR_PAIR(2));
                    break;
                case 'x':
                    attron(COLOR_PAIR(3) | A_BLINK);
                    mvaddch(i + 3, j + 1, map.tab[i][j]);
                    attroff(COLOR_PAIR(3) | A_BLINK);
                    map.square++;
                    break;
                }
            }
        }
    put_stat(map);
}
