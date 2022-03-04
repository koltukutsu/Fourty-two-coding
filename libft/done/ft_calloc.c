#include "libft.h"

void *calloc(size_t nmemb, size_t size)
{
    if (nmemb == 0 || size == 0)
        nmemb = size = 1;

    void *ptr;

    ptr = malloc(nmemb * size);

    if (ptr)
        ft_bzero(ptr, size);

    return (ptr);
}