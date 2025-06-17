/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzholama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 07:24:18 by rzholama          #+#    #+#             */
/*   Updated: 2025/06/17 07:26:12 by rzholama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst_str, const void *src_str, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			i;

	if (!dst_str && !src_str)
		return (NULL);
	if (dst_str == src_str)
		return (dst_str);
	dst = (unsigned char *)dst_str;
	src = (unsigned char *)src_str;
	i = 0;
	while (i != n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst_str);
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
