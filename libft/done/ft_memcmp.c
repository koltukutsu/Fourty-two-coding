#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    if (n == 0)
    {
        return (0);
    }

    const unsigned char *ptr_s1;
    const unsigned char *ptr_s2;

    ptr_s1 = s1;
    ptr_s2 = s2;

    while (n--)
    {
        if (*ptr_s1++ != *ptr_s2++)
        {
            return (*--ptr_s1 - *--ptr_s2);
        }
    }

    return (0);
}