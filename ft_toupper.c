int	ft_isalpha(unsigned char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_toupper(int d)
{
	if (!ft_isalpha(d))
	{
		return (d);
	}
	else
	{
		if (d >= 'a' && d <= 'z')
			return (d - 32);
		return (d);
	}
}

#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("My function: %c\n", ft_toupper('-'));
	printf("Original function: %c\n", toupper('-')); 
	
	printf("My function: %c\n", ft_toupper('z'));
	printf("Original function: %c\n", toupper('z'));
	
	printf("My function: %c\n", ft_toupper('V'));
	printf("Original function: %c\n", toupper('V'));
}
