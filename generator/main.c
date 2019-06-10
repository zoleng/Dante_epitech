/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** main
*/

#include "dante.h"
#include <stddef.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check_params(mapper mapper)
{
    if (mapper.line == 1) {
        for (int i = 0; i < mapper.column; i++)
            my_putchar('*');
        return (1);
    }
    else if (mapper.column == 1) {
        for (int i = 0; i < mapper.line; i++)
            my_putchar('*');
        return (1);
    }
    else if (mapper.column < 5 && mapper.column > 1 ||
    mapper.line < 5 && mapper.line > 1)
        return (84);
    return (0);
}

int main (int ac, char *av[])
{
    struct mapper mapper;

    srand(time(NULL));
    if (ac <= 2 || ac > 4)
        return (84);
    mapper.line = my_getnbr(av[1]);
    mapper.column = my_getnbr(av[2]);
    if (check_params(mapper) == 1)
        return (0);
    else if (check_params(mapper) == 84)
        return (84);
    mapper.map = malloc_map(mapper);
    if (ac == 3) {
        mapper.map = imperfect_maze(mapper);
        print_board_finish(mapper);
    } else if (ac == 4 && my_strcmp(av[3], "perfect") == 0) {
        mapper.map = debut_algo(mapper);
        print_board_finish(mapper);
    }
    return (0);
}
