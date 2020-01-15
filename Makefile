##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	src/open_read_file.c \
		src/malloc_2d_array.c \
		src/nb_cols_and_rows.c \
		src/fill_tab.c \
		src/put_tab.c \
		src/algorithm_1.c \
		src/algorithm_2.c \
		src/error.c \
		main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

CC	=	gcc

LDFLAGS	=	-lmy -L ./lib/my/

CFLAGS	=	-W -Wall -Wextra -Werror

CPPFLAGS	=	-I ./include

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my/
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	make -C lib/my/ clean
	rm -f $(OBJ)
	rm -f *~

fclean:	clean
	make -C lib/my/ fclean
	rm -f $(NAME)

re:	fclean	all
