/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** my_strcmp
*/

int my_strcmp(const char *s1, const char *s2)
{
    int i = 0;

    for (i = 0; s1[i] == s2[i] && s1[i]; i++);
    return (s1[i] - s2[i]);
}