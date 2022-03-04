#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    for (;; ++s)
    {
        if (*s == c)
        {
            return ((char *)s);
        }
        if (*s == '\0')
        {
            return (NULL);
        }
    }
}