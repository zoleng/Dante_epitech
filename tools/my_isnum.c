/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** my_isnum
*/

int my_isnum(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] > '9' || str[i] < '0')
            return (84);
    }
    return (0);
}