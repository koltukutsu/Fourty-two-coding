#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    if (n == 0)
    {
        return (0);
    }

    const unsigned char *ptr_s1;
    const unsigned char *ptr_s2;
    int value_s1;
    int value_s2;

    value_s1 = value_s2 = 0;
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