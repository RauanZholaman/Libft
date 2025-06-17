/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzholama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 07:14:23 by rzholama          #+#    #+#             */
/*   Updated: 2025/06/17 07:14:26 by rzholama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int d)
{
	if (d >= 0 && d <= 127)
		return (1);
	return (0);
}

//#include <stdio.h>
//#include <ctype.h>

/*int main()
{
	printf("My function: %d\n", ft_isascii('='));
	printf("Original Function: %d\n", isascii('='));
}*/
