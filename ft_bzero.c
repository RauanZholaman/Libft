#include "stdio.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *str;
	size_t	i;

	str = (unsigned char*)s;
	i = 0;
	while (i != n)
	{
		str[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char c[50] = "Hello";
	char d[50] = "Hello";

	bzero(c, -2);
	ft_bzero(d, -2);

	printf("%s\n", c);
	printf("%s\n", d);
}
*/
