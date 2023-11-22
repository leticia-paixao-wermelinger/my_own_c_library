
NAME = libft.a

CC = cc

FLAGS = -Wall -Wextra -Werror

SRCS = \
my_atoi.c \
my_bzero.c \
my_calloc.c \
my_isalnum.c \
my_isalpha.c \
my_isascii.c \
my_isdigit.c \
my_isprint.c \
my_itoa.c \
my_memchr.c \
my_memcmp.c \
my_memcpy.c \
my_memmove.c \
my_memset.c \
my_putchar.c \
my_putchar_fd.c \
my_putendl_fd.c \
my_putnbr.c \
my_putnbr_base.c \
my_putnbr_fd.c \
my_putstr.c \
my_putstr_fd.c \
my_split.c \
my_strchr.c \
my_strdup.c \
my_striteri.c \
my_strjoin.c \
my_strlcat.c \
my_strlcpy.c \
my_strlen.c \
my_strmapi.c \
my_strncmp.c \
my_strnstr.c \
my_strrchr.c \
my_strtrim.c \
my_substr.c \
my_tolower.c \
my_toupper.c \
my_clear_vect.c \

OPEN = ./a.out

OBJS = ${SRCS:.c=.o}

.c.o:
	$(CC) $(FLAGS) -c $< -o $@

all: ${NAME}

${NAME} : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f ${NAME}

re: fclean all

main: re
	clear
	$(CC) $(FLAGS) main.c $(NAME) && $(OPEN)
