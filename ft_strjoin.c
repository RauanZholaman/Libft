#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	prelen;
	size_t	suflen;
	char	*full_len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	prelen = ft_strlen(s1);
	suflen = ft_strlen(s2);
	full_len = malloc(prelen + suflen + 1);
	if (!full_len)
		return (NULL);
	while (i < prelen)
	{
		full_len[i] = s1[i];
		i++;
	}
	while (j < suflen)
	{
		full_len[i + j] = s2[j];
		j++;
	}
	full_len[prelen + suflen] = '\0';
	return (full_len);
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
