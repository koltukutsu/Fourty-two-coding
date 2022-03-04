#include "libft.h"

size_t ft_strlen(const char *arr)
{
    int i;

    i = 0;
    while (arr[i] != '\0')
    {
        i++;
    }
    return i;
}
