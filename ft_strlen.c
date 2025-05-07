#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	char *word = "Hello 1+++++___@@13443+++--34433\t";
	printf("%ld\n", ft_strlen(word));
	printf("%ld\n", strlen(word));
}
