/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzholama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 07:24:02 by rzholama          #+#    #+#             */
/*   Updated: 2025/06/17 07:24:04 by rzholama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (n--)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str[50] = "3453";
	char bts[50] = "23423";

	int num_s = 2343;
	int num_b = 2343;

	int ptr;
	int test;

	ptr = memcmp(str, bts, 5);
	test = ft_memcmp(str, bts, 5);

	printf("The result of memcmp: %d\n", ptr);
	printf("The result of ft_memcmp: %d\n", test);

	ptr = memcmp(&num_s, &num_b, sizeof(int));
	test = ft_memcmp(&num_s, &num_b, sizeof(int));

	printf("The result of memcmp: %d\n", ptr);
	printf("The result of ft_memcmp: %d\n", test);
}
*/
