#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    if ((dest == NULL) || (src == NULL))
    {
        return;
    }
    unsigned char *temp_dist;
    unsigned char *temp_src;

    temp_dist = dest;
    temp_src = src;

    while (n-- > 0)
    {
        *temp_dist++ = *temp_src++;
    }
}