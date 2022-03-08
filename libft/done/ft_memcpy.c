#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *temp_dist;
    unsigned const char *temp_src;

    temp_dist = dest;
    temp_src = src;

    while (n--)
    {
        *temp_dist++ = *temp_src++;
    }
    return dest;
}