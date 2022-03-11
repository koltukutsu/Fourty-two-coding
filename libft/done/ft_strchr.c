#include "libft.h"

char *ft_strchr(const char *s, int ch)
{
    char c;

    c = ch;
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