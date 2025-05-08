int	ft_isprint(int d)
{
	if (d >= 32 && d <= 126)
		return (1);
	return (0);
}

#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("My function: %d\n", ft_isprint(','));
	printf("Original function: %d\n", isprint(','));
}
