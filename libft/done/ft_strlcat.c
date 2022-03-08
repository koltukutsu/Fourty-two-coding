#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    char *ptr_dst;
    char *ptr_src;
    size_t len;
    size_t len_pre_filled;

    ptr_dst = dst;
    len = dstsize;

    while (len-- && *ptr_dst != '\0')
        ptr_dst++;

    len_pre_filled = ptr_dst - dst;
    len = dstsize - (len_pre_filled);

    if (len == 0)
    {
        return (len_pre_filled + ft_strlen(src));
    }

    while (*ptr_src != '\0')
    {
        if (len != 1)
        {
            *ptr_dst++ = *ptr_src;
            len--;
        }
        ptr_src++;
    }
    *ptr_dst = '\0';
    return (len_pre_filled + (ptr_src - src));
}