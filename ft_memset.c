#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char *s;
	size_t	i;

       	s = (unsigned char*)str; 
	i = 0;	
	while (i != n)
	{
		s[i] = (unsigned char)c;
		i++;
	}

	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str[50] = "Hello, World";
	char ptr[50] = "Hello, World";
	int size = -2;

   	memset(str, '#', size);
	ft_memset(ptr, '#', size);
   	
   	printf("The result of ft_memset: %s\n", str);
	printf("The result of memset: %s\n", ptr);

   	return(0);
}
*/
