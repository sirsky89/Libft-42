#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*dst;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	total_size = count * size;
	if (count > 0 && total_size / count != size)
		return (NULL);
	dst = malloc(total_size);
	if (!dst)
	{
		free(dst);
		return (NULL);
	}
	ft_memset(dst, 0, total_size);
	return (dst);
}
