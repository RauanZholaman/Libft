int	ft_isalpha(unsigned char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_tolower(int d)
{
	if (!ft_isalpha(d))
	{
		return (d);
	}
	else
	{
		if (d >= 'A' && d <= 'Z')
			return (d + 32);
		return (d);
	}
}

#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("My function: %c\n", ft_tolower('-'));
	printf("Original function: %c\n", tolower('-')); 
	
	printf("My function: %c\n", ft_tolower('z'));
	printf("Original function: %c\n", tolower('z'));
	
	printf("My function: %c\n", ft_tolower('V'));
	printf("Original function: %c\n", tolower('V'));
}
