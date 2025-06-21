/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzholama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 07:04:48 by rzholama          #+#    #+#             */
/*   Updated: 2025/06/17 07:07:51 by rzholama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i != n)
	{
		str[i] = '\0';
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char c[50] = "Hello";
// 	char d[50] = "Hello";

// 	bzero(c, 7);
// 	ft_bzero(d, 7);

// 	printf("%s\n", c);
// 	printf("%s\n", d);
// }

