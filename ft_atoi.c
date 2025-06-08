#include "Libft.h"

int     ft_atoi(const char *str)
{
    while (*str != '\0')
    {
        if (ft_isdigit(*str) != 0) 
            return 0;
        str++;
    }
    
    return (int)*str;
}

#include <stdio.h>
#include <stdlib.h>

int     main()
{
    char *c = "908475966";
    printf("Result of atoi: %d\n", atoi(c));
    printf("Result of ft_atoi: %d\n", ft_atoi(c));
    
}