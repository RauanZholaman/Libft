#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	s_leng;
	
	s_leng = ft_strlen(str);
	while (s_leng + 1 != 0)
	{
		if (str[s_leng] == c)
			return ((char *)str + s_leng);
		s_leng--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char s[] = "ABCDERFDDS 1_--@#\t$dd";

	char c = 'D';

	char *word = strrchr(s, c);
	char *n_word = ft_strrchr(s, c);

	printf("String given is: (%s), and the char: (%c). strrchr():    %s.\n", s, c, word);
	printf("String given is: (%s), and the char: (%c). ft_strrchr(): %s.\n", s, c, n_word);
}*/
