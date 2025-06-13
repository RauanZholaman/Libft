#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const unsigned char *s;
	unsigned char *d;

	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	while (n > 0)
	{
		d[n - 1] = s[n - 1];
		n--;
	}
	return dst;
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char mem[50] = "ABCDEF";
	char ft[50] = "ABCDEF";

	//memmove(mem, mem + 2, 4);
	//ft_memmove(ft, ft + 2, 4);

	memmove(, NULL, 0);
	ft_memmove(NULL, NULL, 0);

	printf("The result of memmove: %s\n", mem);
	printf("The result of ft_memmove: %s\n", ft);
}
*/
