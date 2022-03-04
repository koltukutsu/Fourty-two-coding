#include "libft.h"
#include <string.h>

void *ft_memmove(void *dest, void *src, size_t n)
{
    if (dest == NULL || src == NULL)
    {
        return;
    }

    unsigned char *d;
    unsigned char *s;
    // const unsigned char *s;

    d = dest;
    s = src;
    if (d < s)
    {
        while (n--)
        {
            *d++ = *s++;
        }
    }
    else
    {
        char *lasts = s + (n - 1);
        char *lastd = d + (n - 1);
        while (n--)
        {
            *lastd-- = *lasts--;
        }
    }
}

// int main()
// {
//     char list[] = "first things first";
//     size_t n = ft_strlen(list);

//     ft_memmove(list, "mehmet semih babacan bu gun nasillar acaba", n);
//     int i = 0;
//     for (i = 0; i < n; i++)
//         printf("%c", list[i]);
// }