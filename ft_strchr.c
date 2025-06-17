/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzholama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 08:33:33 by rzholama          #+#    #+#             */
/*   Updated: 2025/06/17 08:35:44 by rzholama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	test;

	test = (unsigned char)c;
	while (*str != '\0')
	{
		if ((unsigned char)*str == test)
			return ((char *)str);
		str++;
	}
	if (test == '\0')
		return ((char *)str);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char s[] = "Jerrp, Hello";

// 	char c = '\0';

// 	char *p = strchr(s, c);
// 	char *d = ft_strchr(s, c);

// 	printf("String given is: (%s), and the char: (%c). 
// 	strchr(): %s.\n", s, c, p); 
// 	printf("String given is: (%s), and the char: (%c). 
// 	ft_strchr(): %s.\n", s, c, d); 
// }
