/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzholama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 08:46:03 by rzholama          #+#    #+#             */
/*   Updated: 2025/06/17 08:46:42 by rzholama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char *word = "Hello 1+++++___@@13443+++--34433\t";
	printf("%ld\n", ft_strlen(word));
	printf("%ld\n", strlen(word));
}
*/
