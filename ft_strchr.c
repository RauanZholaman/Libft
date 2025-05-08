/*
char	*ft_strchr(const char *str, int c)
{

}
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "Hello World!";

	char c = 'H';

	char *p = strchr(s, c);

	printf("String given is: (%s), and the char: (%c). The result is: %s.\n", s, c, p); 
}
