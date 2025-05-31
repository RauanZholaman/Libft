char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}

	return (0);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "Jerrp,";

	char c = '_';

	char *p = strchr(s, c);
	char *d = ft_strchr(s, c);

	printf("String given is: (%s), and the char: (%c). strchr(): %s.\n", s, c, p); 
	printf("String given is: (%s), and the char: (%c). ft_strchr(): %s.\n", s, c, d); 
}
