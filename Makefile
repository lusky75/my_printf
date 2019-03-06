##
## ETNA PROJECT, 10/12/2018 by chen_l
## MAKEFILE
## File description:
##      [...]
##

NAME 	= my_ls

SRC		=	\
			main.c\
			my_getnbr.c\
			my_nbrlen.c\
			my_printf.c\
			my_putchar.c\
			my_putnbr_base.c\
			my_putnbr.c\
			my_putstr.c\
			my_strlen.c\
			precision.c\

CC		= gcc

OBJ		= $(SRC:.c=.o)

CFLAGS 	= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
