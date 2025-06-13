#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

int	ft_isdigit(int c);
int     ft_isalpha(unsigned char c);
int     ft_isalnum(int d);
int     ft_isprint(int d);
int     ft_isascii(int d);
size_t  ft_strlen(const char *s);
void	*ft_memcpy(void *dst_str, const void *src_str, size_t n);

#endif
