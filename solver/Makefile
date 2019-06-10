##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

RM	=	rm -rf

SRC	=	main.c				\

CFLAGS	=	-I./include

CC	=	gcc

OBJ	=	$(SRC:.c=.o)

NAME	= dante

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

