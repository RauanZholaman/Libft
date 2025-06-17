/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzholama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 06:55:16 by rzholama          #+#    #+#             */
/*   Updated: 2025/06/17 07:04:26 by rzholama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhitespace(const char s)
{
	return (s == ' ' || s == '\t' || s == '\n'
		|| s == '\v' || s == '\r' || s == '\f');
}

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;

	num = 0;
	sign = 0;
	while (ft_iswhitespace(*str))
		str++;
	if (*str == '-')
	{
		sign = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	if (sign == 1)
		return (-num);
	return (num);
}
/*
#include <stdio.h>
#include <stdlib.h>

int     main()
{
    char *c = "-2332+__+==123--==345";
    printf("Result of atoi: %d\n", atoi(c));
    printf("Result of ft_atoi: %d\n", ft_atoi(c));  
}
*/
