/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzholama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 07:10:17 by rzholama          #+#    #+#             */
/*   Updated: 2025/06/17 12:53:34 by rzholama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*arr;

	if (nitems == 0 || size == 0)
		return (malloc(0));
	if (nitems > SIZE_MAX / size)
		return (NULL);
	arr = malloc(nitems * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, nitems * size);
	return (arr);
}

//#include <stdio.h>

// int main() {

//     char *ptr = (char *)calloc(0, 0);
//     char *npr = (char *)ft_calloc(10, 0);

//     if (ptr == NULL) {
//         printf("Allocation Failed");
//         exit(0);
//     }
//     if (npr == NULL) {
//         printf("Allocation Failed");
//         exit(0);
//     }
//     printf("%d\n", ptr[0]);
//     printf("%d\n", npr[0]);
//     free(ptr);
//     free(npr);
// }
