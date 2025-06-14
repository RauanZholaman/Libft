#include "libft.h"

/*static int	ft_strncmp(const char *s1, const char *s2, size_t n)
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
}

int		ft_strlen(const char *str)
{
	int		i;
	
	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
*/
char *ft_strnstr(const char *s1, const char *s2, size_t len)	
{
	size_t		i;
	size_t		s2_size;

	i = 0;
	s2_size = ft_strlen(s2);
	if (len < s2_size)
		return (0);
	if (*s2 == '\0')
		return (char *)s1;
	while (*s1 != '\0' && (i <= len - s2_size))
	{
		if (ft_strncmp(s1 + i, s2, s2_size) == 0)
			return (char *)s1 + i;
		i++;
	}	
	return (0);
}
/*
#include <stdio.h>

int main()
{
	// char w1[] = "abc\0xyz!";
	// char w2[] = "x";

	printf("My ft_strnstr function: %s", ft_strnstr("Hello", "lo", 5));

	printf("\nEmpty needle: %s\n", ft_strnstr("hello", "", 5)); 	// Should return "hello"
    printf("Empty haystack: %s\n", ft_strnstr("", "abc", 3)); 		// NULL
    printf("Zero len: %s\n", ft_strnstr("hello", "he", 0)); 		// NULL
    printf("Len < needle: %s\n", ft_strnstr("hello", "hello", 4)); 	// NULL
    printf("Len > haystack: %s\n", ft_strnstr("hi", "i", 5)); 		// Pointer to "i"
    printf("No match: %s\n", ft_strnstr("hello", "xyz", 5)); 		// NULL
    printf("Partial match: %s\n", ft_strnstr("hell", "hello", 4)); 	// NULL
    printf("Match at end: %s\n", ft_strnstr("hello", "lo", 5)); 	// Pointer to "lo"
    printf("Case mismatch: %s\n", ft_strnstr("Hello", "hello", 5)); // NULL

}*/
