#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *s;
	
	s = (unsigned char*)str;
	while (n--)
	{
		if (*s == (unsigned char)c)
			return (s);
		s++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char dst[50] = "Hello";
	char src = 'l';
	size_t nb = 0;

	char *chr, *pts;
	chr = memchr(dst, src, nb);
	pts = ft_memchr(dst, src, nb);

	printf("Pointer memchr returns: %s\n", chr);
	printf("Pointer ft_memchr returns: %s\n", pts);
}
*/
