.PHONY: all clean fclean

NAME = libft.a
CC = clang
CCFLAGS = -Wall -Wextra -Werror -I. -c

FILE = ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strlen.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strnstr.c \
	   ft_strncmp.c \
	   ft_atoi.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_calloc.c \
	   ft_realloc.c \
	   ft_strdup.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_split.c \
	   ft_itoa.c \
	   ft_strmapi.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   \
	   ft_arrdel.c \
	   ft_memdel.c \
	   ft_strsplit.c \
	   ft_strsub.c 

OBJ = $(FILE:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ) Makefile
	@ar -rc $(NAME) $(OBJ)
	@echo "--------------------------------"
	@echo "${NAME} compiled"
	@echo "--------------------------------"

%.o: %.c
	echo $<
	@$(CC) $(CCFLAGS) $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
