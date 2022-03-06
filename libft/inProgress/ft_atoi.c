#include "libft.h"

static int ft_multiply(int digit, int decimal_value)
{
    int total;

    total = digit;
    while (decimal_value--)
    {
        total *= 10;
    }
    return total;
}

int ft_atoi(const char *nptr)
{
    int total_value;
    int length;

    length = 0;
    while (nptr[length])
        length++;
    length++;
    while (--length)
    {
        if (ft_isdigit(nptr[length]))
        {
            total_value += ft_multiply(nptr[length], length);
        }
        else
        {
            break;
        }
    }
    return total_value;
}

int main()
{
    printf("%d", ft_atoi("342"));
    return 0;
}