#include "libft.h"

static size_t	ft_digit_len(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str_num;
	size_t		digits;
	long int	num;

	num = n;
	digits = ft_digit_len(n);
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	str_num = malloc(sizeof(char) * (digits + 1));
	if (!str_num)
		return (0);
	str_num[digits] = 0;
	while (digits--)
	{
		str_num[digits] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		str_num[0] = '-';
	return (str_num);
}
