
#ifndef LIBFT_H 
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		my_atoi(const char *nptr);
void	my_bzero(void *s, size_t n);
void	*my_calloc(size_t nmemb, size_t size);
char	**my_clear_vect(char **vect, int size);
void	my_div_mod(int a, int b, int *div, int *mod);
int		my_fibonacci(int index);
int		my_find_next_prime(int nb);
int		my_isalnum(int c);
int		my_isalpha(int c);
int		my_isascii(int c);
int		my_isdigit(int c);
void	my_is_negative(int n);
int		my_is_prime(int nb);
int		my_isprint(int c);
int		my_iterative_factorial(int nb);
int		my_iterative_power(int nb, int power);
char	*my_itoa(int n);
void	*my_memchr(const void *s, int c, size_t n);
int		my_memcmp(const void *s1, const void *s2, size_t n);
void	*my_memcpy(void *dest, const void *src, size_t n);
void	*my_memmove(void *dest, const void *src, size_t n);
void	*my_memset(void *s, int c, size_t n);
void	my_print_alphabet(void);
void	my_print_comb(void);
void	my_print_numbers(void);
void	my_print_reverse_alphabet(void);
int		my_putchar(char c);
void	my_putchar_fd(char c, int fd);
void	my_putendl_fd(char *s, int fd);
int		my_putnbr(int n);
int		my_putnbr_base(unsigned long int n, int max_base, char c);
void	my_putnbr_fd(int n, int fd);
int		my_putstr(char *s);
void	my_putstr_fd(char *s, int fd);
int		my_recursive_factorial(int nb);
int		my_recursive_power(int nb, int power);
char	**my_split(char const *s, char c);
int		my_sqrt(int nb);
char	*my_strcapitalize(char *str);
char	*my_strchr(const char *s, int c);
char	*my_strdup(const char *s);
int		my_str_is_alpha(char *str);
int		my_str_is_lowercase(char *str);
int		my_str_is_numeric(char *str);
int		my_str_is_printable(char *str);
int		my_str_is_uppercase(char *str);
char	*my_strcapitalize(char *str);
void	my_striteri(char *s, void (*f)(unsigned int, char *));
char	*my_strjoin(char const *s1, char const *s2);
size_t	my_strlcat(char *dst, const char *src, size_t size);
size_t	my_strlcpy(char *dst, const char *src, size_t size);
size_t	my_strlen(const char *s);
char	*my_strlowercase(char *str);
char	*my_strmapi(char const *s, char (*f)(unsigned int, char));
int		my_strncmp(const char *s1, const char *s2, size_t n);
char	*my_strnstr(const char *big, const char *little, size_t len);
char	*my_strrchr(const char *s, int c);
char	*my_strtrim(char const *s1, char const *set);
char	*my_strupcase(char *str);
char	*my_substr(char const *s, unsigned int start, size_t len);
void	my_swap(int *a, int *b);
int		my_tolower(int c);
int		my_toupper(int c);
void	my_ultimate_div_mod(int *a, int *b);
void	my_ultimate_ft(int *********nbr);
int		my_ultimate_range(int **range, int min, int max);
#endif
