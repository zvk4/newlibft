/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <zkarali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:22:59 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/02 19:50:45 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *p = (unsigned char *)s;

    while (n--)
    {
        if (*p == (unsigned char)c)
            return (p);
        p++;
    }
    return (0);
}

#include <stdio.h>
int main(){
    char a[]="asdfg";
    int b= 'd';
    printf("%p\n", ft_memchr(a, b, 5)); 
}