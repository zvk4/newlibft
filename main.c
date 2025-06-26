#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
int main()
{
    int i = 0;
    char **a= ft_split("   ", ' ');
    if (!a)
        return 1;
    while (i < 3)
    {
        printf("[%s]", a[i]);
        i++;
        free(a[i]);
    }
    free(a);
}

// -2147483648