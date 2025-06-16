#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	
	i = 0;
	src_len = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[src_len] != '\0')
		src_len++;
	return	(src_len);
}
/*
#include <stdio.h>

int	main()
{
	char	d[30] = "Hello, World!";
	char	s[30] = "Bye - Bye";
	size_t	d_size = ft_strlen(d);
	printf("%ld \n", ft_strlcpy(d, s, d_size));
	printf("%s\n", d);
}
*/
