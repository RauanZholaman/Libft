#include "libft.h"

int     is_inset(char c, char const *set)
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
    char    *str;
    size_t  str_s1;
    size_t  end;
    
    while (is_inset(*s1, set))
    {
        s1++;
    }
    end = ft_strlen(s1) - 1;
    while (end > 0 && is_inset(s1[end], set))
    {
        end--;
    }
    str_s1 = ft_strlen(s1);
    str = malloc(str_s1 + 1);
    if (!str)
        return (NULL);

    char *result = str;
    while (*s1 != '\0' && str_s1--)
    {
        *str++ = *s1++;
    }
    *str = '\0';
    return (result);
}

#include <stdio.h>

int main()
{
    char *s1 = "xxxxxelloxxx";
    char *set = "xxx";
    char *new = ft_strtrim(s1, set);
    printf("%s\n", new);
}