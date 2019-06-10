/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** create_mapper.map
*/

#include "dante.h"
#include <stdlib.h>

char **malloc_map(mapper mapper)
{
    int i = 0;

    mapper.map = malloc(sizeof(char *) * (mapper.line));
    if (!mapper.map)
        delete3();
    while (i != mapper.line) {
        mapper.map[i] = malloc(sizeof(char) * mapper.column);
        if (!mapper.map)
            delete2(mapper, i);
        i = i + 1;
    }
    mapper.map = basic_map_creator(mapper);
    return (mapper.map);
}

char **contour_map(mapper mapper)
{
    for (int x = 0; x != mapper.column; x++)
        mapper.map[0][x] = 'B';
    for (int x = 0; x != mapper.column; x++) {
        mapper.map[mapper.line - 1][x] = 'B';
        mapper.map[mapper.line - 2][x] = '2';
    }
    for (int j = 1; j != mapper.line - 2; j++) {
        mapper.map[j][0] = 'B';
        mapper.map[j][1] = '3';
        if ((j % 2) == 0)
            mapper.map[j][1] = 'B';
        mapper.map[j][mapper.column] = '3';
        if (j != mapper.line - 4 && (mapper.column % 2) == 0)
            mapper.map[j][mapper.column - 1] = 'B';
        else
            mapper.map[j][mapper.column - 1] = '3';
        if ((j % 2) == 0 && j != mapper.column - 2)
            mapper.map[mapper.line - 2][j] = 'B';
    }
    return (mapper.map);
}

char **basic_map_creator(mapper mapper)
{
    int state = 1;

    for (int i = 1; i != mapper.line; i++) {
        if (state == 1) {
            for (int j = 2; j != mapper.column; j++)
                mapper.map[i][j] = '0';
            state = 2;
        } else if (state == 2) {
            for (int j = 1; j <= mapper.column; j += 2) {
                mapper.map[i][j] = '0';
                mapper.map[i][j + 1] = '2';
            }
            state = 1;
        }
    }
    mapper.map = contour_map(mapper);
    return (mapper.map);
}

int end(mapper mapper)
{
    mapper.map[mapper.line - 1][mapper.column - 1] = 'A';
    mapper.map[mapper.line - 3][mapper.column - 2] = 'A';
    mapper.map[mapper.line - 3][mapper.column - 3] = 'A';
    mapper.map[mapper.line - 1][mapper.column] = 'A';
    mapper.map[0][0] = 'A';
    mapper.map[1][0] = 'A';
    mapper.map[2][0] = 'A';
    mapper.map[2][1] = 'A';
    mapper.map[2][2] = 'A';
    return (0);
}

int print_board_finish(mapper mapper)
{
    for (int x = mapper.line - 1; x != mapper.line - 4; x--)
        mapper.map[x][mapper.column - 1] = 'A';
    end(mapper);
    for (int j = 0; j != mapper.line; j++) {
        for (int i = 0; i != mapper.column; i++) {
            if (mapper.map[j][i] != 'A' && mapper.map[j][i] != 'B')
                my_putchar('X');
            else
                my_putchar('*');
        }
        if (j != mapper.line - 1) {
            my_putchar('\n');
        }
    }
    return (0);
}
