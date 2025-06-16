#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		i++;
		s1++;
		s2++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char w1[] = "abcd";
	char w2[] = "abd\0";

	int res = strncmp(w1, w2, 4);
	int mres = ft_strncmp(w1, w2, 4);

	printf("Test case 0:\n");
	printf("The result of the original function: %d \n", res);
	printf("The result of my function: %d \n", mres);
	printf("\n");

	printf("Test case 1: First character comparison\n");
	printf("Original strncmp: %d\n", strncmp(w1, w2, 1));
	printf("The result of my function: %d\n", ft_strncmp(w1, w2, 1));
	printf("\n");
	
	char same1[] = "Hello";
    	char same2[] = "Hello";
	printf("Test case 2: Same strings\n");
	printf("Original strncmp: %d\n", strncmp(same1, same2, 5));
	printf("The result of my function: %d\n", ft_strncmp(same1, same2, 5));
	printf("\n");

	printf("Test case 3: n=0\n");
	printf("Original strncmp: %d\n", strncmp("abc", "def", 0));
	printf("The result of my function: %d\n", ft_strncmp("abc", "def", 0));
	printf("\n");

	printf("Test case 4: Empty string\n");
	printf("Original strncmp: %d\n", strncmp("", "abc", 3));
	printf("The result of my function: %d\n", ft_strncmp("", "abc", 3)); // My function return -97 compared to original (-1). Generally, I believe this shouldn't be an issue since the doc does not mentions the magnitude, but rather sign. 
	printf("\n");

	printf("Test case 5: Comparison with difference\n");
	printf("Original strncmp: %d\n", strncmp(w1, w2, 3));
	printf("The result of my function: %d\n", ft_strncmp(w1, w2, 3));
	printf("\n");
}*/
