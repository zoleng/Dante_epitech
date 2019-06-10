##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

RM	=	rm -rf

SRC	=	create_map.c 			\
		delete.c 			\
		algorythm.c 			\
		../tools/my_putstr.c 		\
		../tools/my_get_nbr.c 		\
		imparfect_maze.c		\
		../tools/my_strcmp.c 		\
		../tools/my_strlen.c 		\
		../tools/my_isnum.c 		\
		main.c

CFLAGS	=	-I./include

CC	=	gcc

OBJ	=	$(SRC:.c=.o)

NAME	= generator

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) -g

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

mr_clean :
	find -type f -name "*~" -delete -o -type f -name "#*#" -delete

.PHONY : all clean fclean mr_clean re

