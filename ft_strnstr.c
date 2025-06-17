/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzholama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 08:52:15 by rzholama          #+#    #+#             */
/*   Updated: 2025/06/17 08:53:23 by rzholama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i;
	size_t		s2_size;

	i = 0;
	s2_size = ft_strlen(s2);
	if (s2_size == 0)
		return ((char *)s1);
	if (len < s2_size)
		return (NULL);
	while (s1[i] != '\0' && (i <= len - s2_size))
	{
		if (ft_strncmp(s1 + i, s2, s2_size) == 0)
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	// char w1[] = "abc\0xyz!";
	// char w2[] = "x";

	printf("My ft_strnstr function: %s", ft_strnstr("Hello", "lo", 5));

	printf("\nEmpty needle: %s\n", ft_strnstr("hello", "", 5)); 	
    printf("Empty haystack: %s\n", ft_strnstr("", "abc", 3)); 		
    printf("Zero len: %s\n", ft_strnstr("hello", "he", 0)); 		
    printf("Len < needle: %s\n", ft_strnstr("hello", "hello", 4)); 	
    printf("Len > haystack: %s\n", ft_strnstr("hi", "i", 5)); 		
    printf("No match: %s\n", ft_strnstr("hello", "xyz", 5)); 		
    printf("Partial match: %s\n", ft_strnstr("hell", "hello", 4)); 	
    printf("Match at end: %s\n", ft_strnstr("hello", "lo", 5)); 	
    printf("Case mismatch: %s\n", ft_strnstr("Hello", "hello", 5)); 

}*/
