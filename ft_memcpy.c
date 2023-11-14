#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *d = dest;
	const char *s = src;
	
	if (d == 0 && s == 0)
		return (0);
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
