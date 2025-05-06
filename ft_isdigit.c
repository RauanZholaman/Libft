int	ft_isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}

#include <stdio.h>
#include <ctype.h>

int	main()
{
	char c = ((int)9);

	int d = 0;
	printf("%d", ft_isdigit(d));
	printf("%d", isdigit(d));
}
