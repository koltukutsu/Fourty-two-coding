#include "libft.h"

char *ft_strrchr(const char *cp, int ch)
{
    char *save;
    char c;

    for (save = (char *)0; (c = *cp); cp++)
    {
        if (c == ch)
            save = (char *)cp;
    }

    return save;
}