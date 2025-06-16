#include "libft.h"

static int     is_inset(char c, char const *set)
{
    while (*set != '\0')
    {
        if (*set == c)
            return (1);
        set++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char	*str;
    size_t	end;
    size_t	full_size;
    char    *result;
    size_t  i;
	
    if (!s1 || !set)
	    return (NULL);    
    while (is_inset(*s1, set))
    	s1++;
    end = ft_strlen(s1) - 1;
    while (end > 0 && is_inset(s1[end], set))
        end--;
    full_size = end + 1;
    str = malloc(full_size + 1);
    if (!str)
        return (NULL);
    result = str;
    i = 0;
    while (i < full_size)
        *str++ = s1[i++];
    *str = '\0';
    return (result);
}

// #include <stdio.h>

// int main()
// {
//     char *s1 = "xxxxxelloxxx";
//     char *set = "xxx";
//     char *new = ft_strtrim(s1, set);
//     printf("%s\n", new);
// }
