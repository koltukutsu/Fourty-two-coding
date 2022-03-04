#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>

int strncmp(const char *s1, const char *s2, size_t n);
char *ft_strrchr(const char *s, int c);
char *ft_strchr(const char *s, int c);
char *strchr(const char *s, int c);
void *ft_memmove(void *dest, void *src, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *arr);

#endif