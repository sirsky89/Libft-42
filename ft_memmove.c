#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *d = dest;
	const char *s = src;

	if (!d && !s)
		return (0);

	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	} else
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	return (dest);
}
