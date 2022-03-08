#include "libft.h"
static int ft_multiply(int digit, int decimal_value)
{
    int total;

    total = digit - 48;
    while (decimal_value-- != -1)
    {
        if (decimal_value == 0)
        {
            total = total * 1;
        }
        else
        {
            total = total * 10;
        }
    }

    return total;
}

int ft_atoi(const char *nptr)
{
    int total_value;
    int i;
    int decimal;

    i = 0;
    decimal = 0;
    while (nptr[i])
        i++;
    i--;
    while (i != -1)
    {
        if (ft_isdigit(nptr[i]))
        {
            total_value += ft_multiply(nptr[i], decimal);
            decimal++;
            i--;
        }
        else
        {
            break;
        }
    }
    return total_value;
}
