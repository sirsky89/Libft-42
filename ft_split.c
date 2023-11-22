#include "libft.h"

static	size_t	ft_word_count(char const *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
	}
	return (count);
}

static char	*ft_extract_word(char const *str, char c)
{
	size_t	count;
	char	*new_str;

	count = 0;
	while (str[count] && str[count] != c)
		count++;
	new_str = malloc(sizeof(char) * (count + 1));
	if (new_str == NULL)
		return (0);
	ft_strlcpy(new_str, str, count + 1);
	return (new_str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	total_word;
	char	**ptr;

	if (s == NULL)
		return (0);
	total_word = ft_word_count(s, c);
	ptr = malloc(sizeof(char *) * (total_word + 1));
	if (ptr == NULL)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			ptr[i++] = ft_extract_word(s, c);
			s += ft_strlen(ptr[i - 1]);
		}
	}
	ptr[i] = '\0';
	return (ptr);
}




