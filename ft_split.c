/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzholama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 08:16:26 by rzholama          #+#    #+#             */
/*   Updated: 2025/06/17 08:32:39 by rzholama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	word;
	int	counter;

	word = 0;
	counter = 0;
	while (*s != '\0')
	{
		if (*s != c && word == 0)
		{
			counter++;
			word = 1;
		}
		else if (*s == c)
			word = 0;
		s++;
	}
	return (counter);
}

static char	*word_dup(char const *start, int len)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = start[i];
		i++;
	}
	str[len] = '\0';
	return (str);
}

static int	trimmed_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**free_str(char **arr, size_t index)
{
	while (index--)
		free(arr[index]);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		word_count;

	if (!s)
		return (NULL);
	i = 0;
	word_count = count_words(s, c);
	arr = malloc((word_count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (i < word_count)
	{
		while (*s == c)
			s++;
		arr[i] = word_dup(s, trimmed_len(s, c));
		if (!arr[i])
			return (free_str(arr, i));
		i++;
		s += trimmed_len(s, c);
	}
	arr[i] = NULL;
	return (arr);
}

// #include <stdio.h>

// int main()
// {       
//         char *str = " Hello, This is my World! ";
//	   char **arr; 
//
//         arr = ft_split(" Hello, This is my world ", ' ');

//         int wordcount = count_words(str, ' ');
//         for (int i = 0; i < wordcount; i++)
// 	{
//                 printf("%s\n", arr[i]);	
//         }
// }
