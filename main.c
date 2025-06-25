#include "libft.h"
#include <stdio.h>

char fti(unsigned int i, char c)
{
    ft_toupper(c);
    return (c);
}

int main()
{
    char dst[]="merhaba";
    char *f= ft_strmapi(dst, fti);
    printf("%s", f);
}

// -2147483648