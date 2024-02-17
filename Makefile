CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
INCS_DIR = ./includes
SRCS_DIR = ./srcs
SRCS = ft_printf.c \
	   ft_format_diu.c \
	   ft_format_hex.c \
	   ft_itoa.c \
	   ft_utils.c

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): %.o: $(SRCS_DIR)/%.c
	$(CC) $(CFLAGS) -I $(INCS_DIR) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

