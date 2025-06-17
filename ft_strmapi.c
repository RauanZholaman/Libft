/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzholama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 08:47:02 by rzholama          #+#    #+#             */
/*   Updated: 2025/06/17 08:49:57 by rzholama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			orig_len;
	char			*new;

	if (!s || !f)
		return (NULL);
	i = 0;
	orig_len = ft_strlen(s);
	new = malloc((orig_len * sizeof(char)) + 1);
	if (!new)
		return (NULL);
	while (s[i] != '\0')
	{
		new[i] = f (i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

// #include <stdio.h>

// int main()
// {
//     char *orig = "Hello, World";
//     char *new = ft_strmapi(orig, change_str(0, *orig));

//     printf("%s\n", new);
// }
