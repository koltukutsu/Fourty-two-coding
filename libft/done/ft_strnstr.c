#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    if (ft_strlen(little) == 0)
    {
        return ((char *)big);
    }

    const char *last_occurence;
    const char *ptr_big;
    size_t little_size;
    int flag;

    little_size = ft_strlen(little);
    ptr_big = big;
    flag = 0;

    while (*ptr_big != '\0' && len--)
    {

        if (ft_strncmp(ptr_big, little, little_size) == 0)
        {
            last_occurence = ptr_big;
            flag = 1;
        }
        ptr_big++;
    }

    if (flag)
    {
        return (char *)last_occurence;
    }
    else
    {
        return NULL;
    }
}