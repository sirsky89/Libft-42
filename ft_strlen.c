#include "libft.h"

size_t ft_strlen(const char *s)
{
	size_t length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}
