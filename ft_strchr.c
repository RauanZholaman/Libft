#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char test = c;
	while (*str != '\0')
	{
		if (*str == test)
			return ((char *)str);
		str++;
	}
	if (test == '\0')
		return (char*)str;

	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "Jerrp, Hello";

	char c = 'H';

	char *p = strchr(s, c);
	char *d = ft_strchr(s, c);

	printf("String given is: (%s), and the char: (%c). strchr(): %s.\n", s, c, p); 
	printf("String given is: (%s), and the char: (%c). ft_strchr(): %s.\n", s, c, d); 
}
*/
