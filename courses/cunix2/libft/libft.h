#include <stddef.h>
#include <stdlib.h>

#define REGISTER_DIFF 32


// Додаткові функції
unsigned int ft_strlen(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);


// Основні функції
void ft_bzero(void *s, size_t n);
char *ft_strchr(const char *s, int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_abs(int j);
div_t ft_div(int numer, int denom);
char *ft_strstr(const char *haystack, const char *needle);  
char *ft_strnstr(const char *big, const char *little, size_t len);
void *ft_memset(void *s, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void ft_striter(char *s, void (*f)(char *));
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s);
char **ft_strsplit(char const *s, char c);
