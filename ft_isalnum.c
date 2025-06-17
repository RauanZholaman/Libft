/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzholama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 07:12:11 by rzholama          #+#    #+#             */
/*   Updated: 2025/06/17 13:07:13 by rzholama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int d)
{
	if (!ft_isalpha(d) && !ft_isdigit(d))
		return (0);
	return (1);
}

//#include <stdio.h>
//#include <ctype.h>

/*int	main()
{
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", isalnum('1'));
}*/
