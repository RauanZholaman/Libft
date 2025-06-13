#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;

	i = 0;
	dst_size = ft_strlen(dst);
	if (dst_size >= size)
		return size + ft_strlen(src); // Right
	while (((dst_size + i + 1) < size) && src[i] != '\0')
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	if (dst_size + i < size)
		dst[dst_size + i] = '\0';

	return (dst_size + ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char d[30] = "Hello,";
	char s[30] = " World! Here we go again!";
	size_t d_size = 32;
	printf("%ld\n", ft_strlcat(d, s, d_size));
	printf("%s\n", d);
}
*/
