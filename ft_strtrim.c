#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	leading;
	size_t	trailing;

	if (!s1)
		return (0);
	leading = 0;
	if (!set)
		return (ft_strdup(s1));
	while (s1[leading] && ft_strchr(set, s1[leading]))
		leading++;
	trailing = ft_strlen(s1) - 1;
	while (s1[trailing] && ft_strchr(set, s1[trailing]))
		trailing--;
	if (leading > trailing)
		return (ft_strdup(""));
	trimmed = ft_substr(s1, leading, trailing - leading + 1);
	if (!trimmed)
		return (0);
	return (trimmed);
}
