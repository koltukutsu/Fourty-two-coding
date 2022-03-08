#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *d;
    const char *s;
    // const unsigned char *s;

    d = (char *)dest;
    s = (const char *)src;
    if (d < s)
    {
        while (n--)
        {
            *d++ = *s++;
        }
    }
    else
    {
        char *lastd = (char *)d + ((size_t)n - 1);
        char *lasts = (char *)s + ((size_t)n - 1);
        while (n--)
        {
            *lastd-- = *lasts--;
        }
    }
    return (dest);
}
