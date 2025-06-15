/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <zkarali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 14:36:14 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/04 13:03:20 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    unsigned char   *d;
    const unsigned char *s;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    i = 0;
    if (d > s)
    {
        while(n-- > 0)
            d[n] = s[n];
    }
    else
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}
#include <stdio.h>
int main()
{

    char str[] = "memmove can be very useful     125";
    char *a=ft_memmove (str+20,str+15,11);
    printf ("%s", a);
    
    /*
    char src[]="merhaba", dest[4]="dün";
    char *a=ft_memmove(dest, src, 3);
    printf("%s", a);
    */
}