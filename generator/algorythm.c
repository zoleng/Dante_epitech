/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** algorythm
*/

#include <time.h>
#include <stdlib.h>
#include "dante.h"
#include <stdio.h>

int randomiser(mapper mapper)
{
    int i = 1;
    int j = 1;
    int x = 0;
    static int status = 1;

    while (mapper.map[i][j] != '0') {
        i = 3 + x;
        j = 3 + x;
        x = x + 1;
    }
    if (status == 1) {
        status = status + 1;
        return (i);
    } else
        return (j);
}

char **debut_algo(mapper mapper)
{
    int status = 0;
    mapper.i = 2;
    mapper.j = 3;
    mapper.map[mapper.i][mapper.j] = 'A';
    int *memory = malloc(sizeof(int) * (mapper.line * mapper.column) * 2);
    int k = 0;
    int count = 0;

    while (status != 3)
            if (mapper.map[mapper.i + 2][mapper.j] == '0' ||
            mapper.map[mapper.i - 2][mapper.j] == '0'
            || mapper.map[mapper.i][mapper.j - 2] == '0' ||
            mapper.map[mapper.i][mapper.j + 2] == '0') {
                while (status != 2) {
                    k = rand() % 4 + 1;
                    if (k == 1 && mapper.map[mapper.i][mapper.j - 2] == '0') {
                        mapper.map[mapper.i][mapper.j - 1] = 'A';
                        mapper.map[mapper.i][mapper.j - 2] = 'A';
                        mapper.j = mapper.j - 2;
                        status = 2;
                    }
                    else if (k == 2 && mapper.map[mapper.i - 2][mapper.j] == '0') {
                        mapper.map[mapper.i - 1][mapper.j] = 'A';
                        mapper.map[mapper.i - 2][mapper.j] = 'A';
                        mapper.i = mapper.i - 2;
                        status = 2;
                    }
                    else if (k == 3 && mapper.map[mapper.i][mapper.j + 2] == '0') {
                        mapper.map[mapper.i][mapper.j + 1] = 'A';
                        mapper.map[mapper.i][mapper.j + 2] = 'A';
                        mapper.j = mapper.j + 2;
                        status = 2;
                    }
                    else if (k == 4 && mapper.map[mapper.i + 2][mapper.j] == '0') {
                        mapper.map[mapper.i + 1][mapper.j] = 'A';
                        mapper.map[mapper.i + 2][mapper.j] = 'A';
                        mapper.i = mapper.i + 2;
                        status = 2;
                    }
                }
                status = 1;
                memory[count] = mapper.i;
                count++;
                memory[count] = mapper.j;
                count++;
            } else {
                mapper.j = memory[count - 1];
                count = count - 1;
                if (count <= 0)
                    status = 3;
                mapper.i = memory[count - 1];
                count = count - 1;
                if (count <= 0)
                    status = 3;
            }
            return (mapper.map);
}
