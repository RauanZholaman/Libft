#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*full_str;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	full_str = malloc(len + 1);
	if (!full_str)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		full_str[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		full_str[i + j] = s2[j];
		j++;
	}
	full_str[len] = '\0';
	return (full_str);
}
// #include <stdio.h>
// int main()
// {
//     char *pre = "42";
//     char *suf = "";
//     char *new; 
//     new = ft_strjoin(pre, suf);
//     printf("%s\n", new);
// }
