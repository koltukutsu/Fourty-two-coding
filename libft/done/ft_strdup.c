#include "libft.h"

char *strdup(const char *s)
{
    size_t length;
    char *copy;
    length = ft_strlen(s);
    length++; // ft_strlen function excludes the terminating character \0 so I need to increase it with one
    if (!(copy = malloc(length)))
        return (NULL);

    ft_memcpy(copy, s, length);
    return (copy);
}