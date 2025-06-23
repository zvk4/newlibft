#include "libft.h"
#include <stdio.h>

int main()
{
    int i = 0;
    int s[1] = {1};
        ft_memset(&s[i], 2, 2);
        ft_memset(&s[i], 244, 1);

    /*    ft_memset(&s[i], 0xFF, 4);
        ft_memset(&s[i], 0xFF, 3);
        ft_memset(&s[i], 0xFF, 2);
        ft_memset(&s[i], 0xDD, 1);*/
        printf("%d\n", s[i]);
}