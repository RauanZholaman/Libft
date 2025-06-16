/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzholama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 13:49:31 by rzholama          #+#    #+#             */
/*   Updated: 2025/06/14 21:41:31 by rzholama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub_s;
	size_t end;
	size_t strlen;
	size_t substr_len;

	strlen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > strlen)
		return (ft_strdup(""));
	end = ft_strlen(s);
	if (strlen - start < len)
		substr_len = strlen - start;
	else 
		substr_len = len;
	sub_s = malloc(substr_len + 1);
	if (!sub_s)
		return (NULL);
	else
		ft_strlcpy(sub_s, s + start, substr_len + 1);
	return (sub_s);
}
/*
#include <stdio.h>

int main()
{
	char *str = "Hello World!";
	char *copy = ft_substr(str, 0, 420000);

	printf("%s\n", copy);
	free(copy);	
	//char *d;
	//d = ft_strchr(str, 'W');

	//printf("%s\n", d);
}
*/
