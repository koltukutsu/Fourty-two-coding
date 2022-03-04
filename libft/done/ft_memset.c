#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	if (s == NULL)
	{
		return;
	}
	unsigned char *tmp_pointer;

	tmp_pointer = s;
	while (n-- > 0)
	{
		*tmp_pointer++ = c;
	}
}