#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void *arr;

	arr = malloc(nitems * size);
	if (arr != NULL)
	{
		ft_bzero(arr, nitems * size);
	}
	return (arr);
}
/*
#include <stdio.h>

int main() {

    int *ptr = (int *)calloc(5, sizeof(int));
    int *npr = (int *)calloc(5, sizeof(int));

    // Checking if failed or pass
    if (ptr == NULL) {
        printf("Allocation Failed");
        exit(0);
    }

    printf("The result of calloc function:\n");
    

    for (int i = 0; i < 5; i++)
	    printf("At index (%d): %d\n", i, ptr[i]);


    printf("\nThe result of ft_calloc function:\n");
    
    for (int q = 0; q < 5; q++)
	    printf("At index (%d): %d\n", q, npr[q]);

    return 0;
}
*/
