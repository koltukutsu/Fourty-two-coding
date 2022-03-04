#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    const char *s_last;
    int flag;

    flag = 0;
    for (;; ++s)
    {
        if (*s == c)
        {
            flag = (flag == 0) ? 1 : flag;
            s_last = s;
        }
    }
    if (flag)
    {
        return ((char *)s_last);
    }
    else
    {
        return (NULL);
    }
}