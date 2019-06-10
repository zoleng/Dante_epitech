/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** my_get_nbr
*/

#include <stdio.h>

int my_getnbr(char *str)
{
    int sign;
    int result;

    sign = 1;
    result = 0;

    while (*str != '\0' && *str >= '0' && *str <= '9')
    {
        if (result > 214748364)
            return (0);
        if (result == 214748364 && *str > 7 && sign == 1)
            return (0);
        if (result == 214748364 && *str > 8 && sign == -1)
            return (0);
        result = result * 10 + *str - 48;
        str = str + 1;
    }
    return (result);
}
