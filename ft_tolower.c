/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzholama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 09:21:45 by rzholama          #+#    #+#             */
/*   Updated: 2025/06/17 13:05:37 by rzholama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int d)
{
	if (!ft_isalpha(d))
	{
		return (d);
	}
	else
	{
		if (d >= 'A' && d <= 'Z')
			return (d + 32);
		return (d);
	}
}
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("My function: %c\n", ft_tolower('-'));
	printf("Original function: %c\n", tolower('-')); 
	
	printf("My function: %c\n", ft_tolower('z'));
	printf("Original function: %c\n", tolower('z'));
	
	printf("My function: %c\n", ft_tolower('V'));
	printf("Original function: %c\n", tolower('V'));
}
*/
