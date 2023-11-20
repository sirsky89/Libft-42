#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t length;
	char *duplicate;

	length = ft_strlen(s1);
	duplicate = malloc(length + 1);
	if (!duplicate)
		return (NULL);
	ft_memcpy(duplicate, s1, length + 1);
	return (duplicate);
}
