/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\n')
        i++;
    return (i);
}