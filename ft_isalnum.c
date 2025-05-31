int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isalnum(int d)
{
	if (!ft_isalpha(d) && !ft_isdigit(d))
		return (0);
	return (1);	
}

#include <stdio.h>
#include <ctype.h>

int	main()
{
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", isalnum('1'));
}
