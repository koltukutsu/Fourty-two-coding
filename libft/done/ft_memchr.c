#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr_s;

    ptr_s = (const unsigned char *)s;
    while (n--)
    {
        if (*ptr_s == c)
        {
            return ((unsigned char *)ptr_s);
        }
        ptr_s++;
    }
    return (NULL);
}