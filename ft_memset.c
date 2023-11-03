#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *source = s;
	while (n > 0)
	{
		source[n - 1] = (unsigned char)c;
		n--;
	}
	return (s);
}
