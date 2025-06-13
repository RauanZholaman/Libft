//#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main()
{
	unsigned char d = '9';

	int c = (unsigned char)d;

	printf("Original Function. Input(1): %d \n", ft_isdigit(1));
	printf("In-built Function. Input(1): %d \n", isdigit(1));

	printf("\nOriginal Function. Input('1'): %d \n", ft_isdigit(c));
	printf("In-built Function. Input('1'): %d \n", isdigit(c));

	printf("\nOriginal Function. Input(-1): %d \n", ft_isdigit(-1));
	printf("In-built Function. Input(-1): %d \n", isdigit(-1));
	
	printf("\nOrigin  Function. Input('a'); %d \n", ft_isdigit('a'));
	printf("In-built Function. Input('a');  %d \n", isdigit('a'));
}
*/
