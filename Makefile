##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

GEN =  generator/

SOL = solver/

MAKE = make -C

CLEANER = make clean -C

FCLEANER = make fclean -C

all:
	$(MAKE) $(GEN)
	$(MAKE) $(SOL)

clean:
	$(CLEANER) $(GEN)
	$(CLEANER) $(SOL)

fclean: clean
	$(FCLEANER) $(GEN)
	$(FCLEANER) $(SOL)

re: clean all

.PHONY: all re clean fclean
