#include "libft.h"
static int ft_multiply(int digit, int decimal_value)
{
    int total;

    total = digit - 48;
    while (decimal_value != -1)
    {
        if (decimal_value == 0)
        {
            total = total * 1;
        }
        else
        {
            total = total * 10;
        }
        decimal_value--;
    }
    return total;
}

int ft_atoi(const char *nptr)
{
    int total_value;
    int i;
    int decimal;
    int flag;

    i = 0;
    decimal = 0;
    total_value = 0;
    flag = 0;
    while (nptr[i])
        i++;
    i--;
    while (i != -1)
    {
        if (flag)
        {
            return (0);
        }
        if (nptr[i] == '-' && i == 0)
        {
            total_value *= -1;
            flag = 1;
        }
        else if (nptr[i] == '+')
        {
            flag = 1;
        }
        else if (nptr[i] == ' ')
        {
        }

        else if (ft_isdigit(nptr[i]))
        {
            total_value = total_value + ft_multiply(nptr[i], decimal);
            decimal++;
        }
        i--;
    }
    return (int)total_value;
}