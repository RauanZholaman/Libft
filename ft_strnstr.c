#include <stddef.h>

char *ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int	i;

	i = 0;
	while (i < len && *s1 != '\0')
	{
		if (*s1 != *s2)
			return s2;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int main()
{
	char w1[] = "Hello";
	char w2[] = "Hello";

	printf("Original strnstr function: %d", ft_strnstr(w1, w2, 3));
}
