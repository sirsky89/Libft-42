#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	if ((!dst || !src) && !n)
		return 0;

	size_t i;
	size_t dst_len = ft_strlen(dst);
	size_t src_len = ft_strlen(src);

	if (n <= dst_len)
		return n + src_len;
	i = dst_len;
	while (*src && i + 1 < n)
		dst[i++] = *src++;
	dst[i] = '\0';
	return dst_len + src_len;
}
