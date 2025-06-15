/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <zkarali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:44:52 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/04 13:43:36 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    
    
    i = 0;
    while (n > i)
    {
        if (((const char *)s1)[i] != ((const char *)s2)[i])
            return (((const char *)s1)[i] - ((const char *)s2)[i]);
        i++;
    }
    return (0);
}

#include <stdio.h>
int main(){
    int s1[]={'1', '5', '3'}, s2[]= {'1', '5', '3', '4'};
    int a=ft_memcmp(s1, s2, sizeof(s1));

    printf("%d", a);
}