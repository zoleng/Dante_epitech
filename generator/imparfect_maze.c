/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** imparfect_maze
*/

#include <stdlib.h>
#include <time.h>
#include "dante.h"
#include <stddef.h>

int randomizer2(void)
{
    int i = 0;

    i = (rand() % 4) + 1;
    return (i);
}

char **imperfect_maze(mapper mapper)
{
    int k = randomizer2();

    mapper.map = debut_algo(mapper);
    for (int i = 2; i != mapper.line - 3; i++) {
        for (int j = 2; j != mapper.column - 3; j++) {
            k = randomizer2();
            if (k == 1)
                mapper.map[i][j] = 'A';
        }
    }
    return (mapper.map);
}