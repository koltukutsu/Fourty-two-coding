#include "libft.h"
#include <string.h>

void *ft_memmove(void *dest, void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;
    // const unsigned char *s;

    d = dest;
    s = src;
    if (d < s)
    {
        while (n--)
        {
            *d++ = *s++;
        }
    }
    else
    {
        char *lasts = s + (n - 1);
        char *lastd = d + (n - 1);
        while (n--)
        {
            *lastd-- = *lasts--;
        }
    }
    return (dest);
}
