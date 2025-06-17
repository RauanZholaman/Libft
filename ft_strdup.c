/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzholama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 08:39:01 by rzholama          #+#    #+#             */
/*   Updated: 2025/06/17 08:40:10 by rzholama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*s;

	len = ft_strlen(str);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	ft_memcpy(s, str, len + 1);
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "Ты пидр.";
	char *dup;
	char *test;

	dup = strdup(str);
	test = ft_strdup(str);

	printf("%s\n", dup);
	printf("%s\n", test);
}
*/
