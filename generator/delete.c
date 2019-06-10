/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** delete
*/

#include <stdlib.h>
#include "dante.h"

int delete3(void)
{
    my_putstr("Fail with the malloc");
    my_putchar('\n');
    return (84);
}

int delete2(mapper mapper, int i)
{
    for (int j = 0; j < i + 2 ; j++)
        free (mapper.map[j]);
    free (mapper.map);
    my_putstr("Fail with the malloc");
    my_putchar('\n');
    return (84);
}

int delete(mapper mapper)
{
    for (int i = 0; i < mapper.line + 2 ; i++)
        free (mapper.map[i]);
    free (mapper.map);
    return (0);
}