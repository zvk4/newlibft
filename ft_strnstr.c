/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:03:12 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/03 14:03:15 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (little[0] == '\0')
        return ((char *)&big[i]);

    while (i < len && big[i] != '\0')
    {
        j = 0;
        while ((i + j) < len && big[i + j] && big[i + j] == little[j])
        {
            j++;
            if (little[j] == '\0')
                return ((char *)&big[i]);
        }
        i++;
    }
    return (0);
}
#include <stdio.h>
int main(){
    char s1[]= "akar", s2[]= "ktytyt";
    char *a = ft_strnstr(s1, s2, 1);
    if (a)
        printf("%s\n", a);
    else 
        printf("bulunamad\n");
}