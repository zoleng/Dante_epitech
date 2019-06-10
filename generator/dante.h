/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** dante
*/

#ifndef DANTE_H_
#define DANTE_H_

typedef struct mapper mapper;
struct mapper
{
    char **map;
    int line;
    int column;
    int status;
    int i;
    int j;
};

int main (int ac, char *av[]);

void my_putchar(char c);
int my_putstr(char const *str);

int my_getnbr(char *str);

int my_strcmp(char *tocmp, char *model);

int my_strlen(char const *str);

int my_isnum(char *str);

int delete3(void);
int delete2(mapper mapper, int i);
int delete(mapper mapper);

char **malloc_map(mapper mapper);
char **basic_map_creator(mapper mapper);
char **contour_map(mapper mapper);
int print_board(mapper mapper);
int print_board_finish(mapper mapper);

char **debut_algo(mapper mapper);
int randomiser(mapper mapper);
int looper (int *memory, int status, int i, int j, mapper mapper);

char **imperfect_maze(mapper mapper);
int randomizer2(void);

int check_k(mapper mapper);
int k_un(mapper mapper, int k);
int k_deux(mapper mapper, int k);
int k_trois(mapper mapper, int k);
int k_quatre(mapper mapper, int k);

#endif /* !DANTE_H_ */
