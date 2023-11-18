#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t copied = 0;

	if (n == 0)
		return ft_strlen(src);
	while (copied < n - 1 && src[copied])
	{
		dst[copied] = src[copied];
		copied++;
	}
	dst[copied] = '\0';
	return ft_strlen(src);
}
