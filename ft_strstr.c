#include <stdio.h>
#include <string.h>

char	*ft_strstr(const char *w1, const char *w2)
{
	int	i;

	i = 0;

	while (*w1 != '\0')
	{
		if (*w1 == *w2)
			return (const char)w2;
		*w1++;
	}
	return (0);
}

int main()
{
	char w1[] = "Gay Sex";
	char w2[] = "S";

	char *res = strstr(w1, w2);
	char *test = ft_strstr(w1, w2);

	printf("%s \n", res);
	printf("%s \n", test);
}
