#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *temp_pointer;

    temp_pointer = s;
    while (n-- > 0)
    {
        *temp_pointer++ = '\0';
    }
}