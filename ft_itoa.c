#include "libft.h"

static int		numlen(int n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static int		ft_isneg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	char	*to_str;
	int		len;
	int		is_neg;
	long	num;

	is_neg = ft_isneg(n);
	if (is_neg)
		num = -(long)n;
	else
		num = n;
	len = numlen(n);
	to_str = malloc((len + 1) * sizeof(char));
	if (!to_str)
		return (NULL);
	to_str[len] = '\0';
	while (len--)
	{
		to_str[len] = (num % 10) + '0';
		num /= 10;
	}
	if (is_neg)
		to_str[0] = '-';
	return (to_str);
}

// #include <stdio.h>

// int main()
// {
// 	int	num = -1;
//     printf("The length of the number is: %d\n", numlen(num));
// 	printf("The converted value is: %s\n", ft_itoa(num));

// }