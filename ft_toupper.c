/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzholama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 09:22:37 by rzholama          #+#    #+#             */
/*   Updated: 2025/06/17 13:05:48 by rzholama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int d)
{
	if (!ft_isalpha(d))
	{
		return (d);
	}
	else
	{
		if (d >= 'a' && d <= 'z')
			return (d - 32);
		return (d);
	}
}
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("My function: %c\n", ft_toupper('-'));
	printf("Original function: %c\n", toupper('-')); 
	
	printf("My function: %c\n", ft_toupper('z'));
	printf("Original function: %c\n", toupper('z'));
	
	printf("My function: %c\n", ft_toupper('V'));
	printf("Original function: %c\n", toupper('V'));
}
*/
