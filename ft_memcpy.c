#include "libft.h"

void	*ft_memcpy(void *dst_str, const void *src_str, size_t n)
{
	unsigned char *dst;
	unsigned char *src;
	size_t	i;

	dst = (unsigned char*)dst_str;
	src = (unsigned char*)src_str;
	i = 0;

	while (i != n)
	{
		dst[i] = src[i];
		i++;
	}
	return dst_str;
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	int size = 10;

	char dst[50] = "Stalone";
	char src[50] = "Arnold";

	char ptr[50] = "Stalone";

	memcpy(dst, src, size);
	ft_memcpy(ptr, src, size);

	printf("The result of MEMCPY: %s\n", dst);
	printf("The result of FT_MEMCPY: %s\n", ptr);
}*/
