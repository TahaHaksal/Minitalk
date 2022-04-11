CC = gcc

CFLAGS = -Wall -Werror -Wextra

PRINTF_SRC = ft_printf/ft_print_ptr.c ft_printf/ft_printf_utils.c ft_printf/ft_printf.c

PRINTF_OBJ = $(PRINTF_SRC:.c=.o)

LIBFT_SRC := $(shell find libft -name "ft_*.c")

LIBFT_OBJ = $(LIBFT_SRC:.c=.o)

LIBFT = libft.a

PRINTF = libftprintf.a

SERVER = server

CLIENT = client

all: $(PRINTF) $(LIBFT) $(SERVER) $(CLIENT)

$(PRINTF): $(PRINTF_OBJ)
	ar cr $(PRINTF) $(PRINTF_OBJ)

$(LIBFT): $(LIBFT_OBJ)
	ar cr $(LIBFT) $(LIBFT_OBJ)

$(SERVER):
	@gcc $(CFLAGS) -L. -lft -lftprintf server.c -o $(SERVER)
	@echo "Compiled server file"

$(CLIENT):
	@gcc $(CFLAGS) -L. -lft -lftprintf client.c -o $(CLIENT)
	@echo "Compiled client file"

clean:
	@rm -rf server client

fclean: clean
	@rm -rf $(PRINTF) $(LIBFT) $(PRINTF_OBJ) $(LIBFT_OBJ)

re: fclean all
