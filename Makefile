
NAME = libft.a

CC = cc

FLAGS = -Wall -Wextra -Werror

SRCS = \
my_atoi.c \
my_bzero.c \
my_calloc.c \
my_clear_vect.c \
my_div_mod.c \
my_fibonacci.c \
my_find_next_prime.c \
my_isalnum.c \
my_isalpha.c \
my_isascii.c \
my_isdigit.c \
my_is_negative.c \
my_is_prime.c \
my_isprint.c \
my_iterative_factorial.c \
my_itoa.c \
my_iterative_power.c \
my_memchr.c \
my_memcmp.c \
my_memcpy.c \
my_memmove.c \
my_memset.c \
my_print_alphabet.c \
my_print_comb.c \
my_print_numbers.c \
my_print_reverse_alphabet.c \
my_putchar.c \
my_putchar_fd.c \
my_putendl_fd.c \
my_putnbr.c \
my_putnbr_base.c \
my_putnbr_fd.c \
my_putstr.c \
my_putstr_fd.c \
my_recursive_factorial.c \
my_recursive_power.c \
my_split.c \
my_sqrt.c \
my_strcapitalize.c \
my_strchr.c \
my_strdup.c \
my_str_is_alpha.c \
my_str_is_lowercase.c \
my_str_is_numeric.c \
my_str_is_printable.c \
my_str_is_uppercase.c \
my_strcapitalize.c \
my_striteri.c \
my_strjoin.c \
my_strlcat.c \
my_strlcpy.c \
my_strlen.c \
my_strlowercase.c \
my_strmapi.c \
my_strncmp.c \
my_strnstr.c \
my_strrchr.c \
my_strtrim.c \
my_strupcase.c \
my_substr.c \
my_swap.c \
my_tolower.c \
my_toupper.c \
my_ultimate_div_mod.c \
my_ultimate_ft.c \
my_ultimate_range.c \

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
