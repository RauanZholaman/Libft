/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzholama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 07:16:37 by rzholama          #+#    #+#             */
/*   Updated: 2025/06/17 07:17:29 by rzholama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int d)
{
	if (d >= 32 && d <= 126)
		return (1);
	return (0);
}

//#include <stdio.h>
//#include <ctype.h>

/*int main()
{
	printf("My function: %d\n", ft_isprint(','));
	printf("Original function: %d\n", isprint(','));
}*/
