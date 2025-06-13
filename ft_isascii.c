int	ft_isascii(int d)
{
	if (d >= 0 && d <= 127)
		return (1);
	return(0);	
}

#include <stdio.h>
#include <ctype.h>

/*int main()
{
	printf("My function: %d\n", ft_isascii('='));
	printf("Original Function: %d\n", isascii('='));
}*/
