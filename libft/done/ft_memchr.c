#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned const char *ptr_s;

    ptr_s = (const char *)s;
    while (n--)
    {
        if (*ptr_s-- == c)
        {
            return (ptr_s);
        }
    }
    return NULL;
}