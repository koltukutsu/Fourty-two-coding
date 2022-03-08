#include "libft.h"

size_t strlcpy(char *dst, char *src, size_t dstsize)
{
    size_t srcsize = ft_stlen(src);

    if (srcsize + 1 <= dstsize)
    {
        memcpy(dst, src, srcsize + 1);
    }
    else if (dstsize != 0)
    {
        memcpy(dst, src, dstsize - 1);
        dst[dstsize - 1] = '\0';
    }
    return srcsize;
}