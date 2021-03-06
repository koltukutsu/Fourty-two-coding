#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
// TODO: void pointer funcitons must return some kind of pointers
// length of the array must be size_t, pay attention to that detail
// control that while I was changing the pointers, its important to not change the original pointer addresses
char *ft_strnstr(const char *big, const char *little, size_t len); // there might be a problem with the function
char *ft_strrchr(const char *s, int c);
char *ft_strchr(const char *s, int c);
char *ft_strchr(const char *s, int c);
char *ft_strdup(const char *s);

void *ft_memchr(const void *s, int c, size_t n);
void *ft_calloc(size_t nmemb, size_t size);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);

int ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_atoi(const char *nptr);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_isprint(int c);

// size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t ft_strlcat(char *dst, const char *src, size_t siz);
size_t ft_strlcpy(char *dst, char *src, size_t dstsize);
size_t ft_strlen(const char *arr);

#endif