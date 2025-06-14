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

	if (!s)
		return (NULL);

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	
	end = ft_strlen(s);
	if ((end - start ) < len)
		sub_s = malloc((end - start) + 1);
	else 
		sub_s = malloc(len + 1);
	if (!sub_s)
		return (NULL);

	else
		ft_strlcpy(sub_s, s + start, len + 1);

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
