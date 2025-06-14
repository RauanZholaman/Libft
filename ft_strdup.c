#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t len;
	char *s;

	len = ft_strlen(str);
	s = malloc(len + 1);

	if (!s)
		return (NULL);
	ft_memcpy(s, str, len + 1);
	
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "Ты пидр.";
	char *dup;
	char *test;

	dup = strdup(str);
	test = ft_strdup(str);

	printf("%s\n", dup);
	printf("%s\n", test);
}
*/
