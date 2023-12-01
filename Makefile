CC = gcc
CFLAGS = -Wall -Wextra -Werror

SOURCES = src/ft_printf.c \

OBJECTS = $(SOURCES:.c=.o)
NAME = libftprintf.a

LIBFT_MAKEFILE = $(MAKE) -C ./src/libft
LIBFT = ./src/libft/libft.a

all: $(NAME)

$(LIBFT):
	$(LIBFT_MAKEFILE)

$(NAME): $(OBJECTS) | $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar crs $@ $^

clean:
	rm -f $(OBJECTS)
	$(LIBFT_MAKEFILE) clean

fclean:
	rm -f $(NAME) $(OBJECTS)
	$(LIBFT_MAKEFILE) fclean

re: fclean all
	$(LIBFT_MAKEFILE) re


.PHONY: all clean fclean re