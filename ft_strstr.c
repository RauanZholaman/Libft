#include "libft.h"

/*int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (*s1 != '\0' || *s2 != '\0'))
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		i++;
		s1++;
		s2++;
	}
	
	return (0);
}*/

/*int		ft_strlen(const char *str)
{
	int		i;
	
	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}*/

char	*ft_strstr(const char *w1, const char *w2)
{
	size_t		w2_size;

	w2_size = ft_strlen(w2);
	if (*w2 == '\0')
		return (char *)w1;
	while (*w1 != '\0')
	{
		if (ft_strncmp(w1, w2, w2_size) == 0)
			return (char *)w1;
		w1++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char w1[] = "Gay Seqs";
	char w2[] = "Seq";

	char *res = strstr(w1, w2);
	char *test = ft_strstr(w1, w2);

	printf("\nHaystack is: \"%s\", and the Needle: '%s'\n", w1, w2);

	printf("\nThe result of original function: %s \n", res);
	printf("The result of My function: %s \n\n", test);

	printf("\nThe result of original function: %s \n", strstr("Hello", ""));
	printf("The result of My function: %s \n\n", ft_strstr("Hello", ""));

	printf("\nThe result of original function: %s \n", strstr("", "Hello"));
	printf("The result of My function: %s \n\n", ft_strstr("", "Hello"));

	printf("\nThe result of original function: %s \n", strstr("Hello", "ll`"));
	printf("The result of My function: %s \n\n", ft_strstr("Hello", "ll`"));

	printf("\nThe result of original function: %s \n", strstr("Hello", "ll"));
	printf("The result of My function: %s \n\n", ft_strstr("Hello", "ll"));

	printf("\nThe result of original function: %s \n", strstr("Hello", "swd"));
	printf("The result of My function: %s \n\n", ft_strstr("Hello", "swd"));

	printf("\nThe result of original function: %s \n", strstr("Hello", "world!"));
	printf("The result of My function: %s \n\n", ft_strstr("Hello", "world!"));

	printf("\nThe result of original function: %s \n", strstr("Hello", "Hello!"));
	printf("The result of My function: %s \n\n", ft_strstr("Hello", "Hello!"));
}*/
