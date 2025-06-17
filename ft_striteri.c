/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzholama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 08:40:23 by rzholama          #+#    #+#             */
/*   Updated: 2025/06/17 08:41:54 by rzholama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f (i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// int main()
// {
//     char str[50] = "Hello, World";

//     ft_striteri(str, f);

//     printf("%s\n", str);
// }
