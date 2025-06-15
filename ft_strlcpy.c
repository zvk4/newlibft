/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <zkarali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 15:50:20 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/01 16:59:58 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;

    i = 0;
    if (!dst || !src)
        return (0);
    if (size != 0)
    {
        while(i < size - 1 && src[i] != '\0')
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    i = 0;
    while(src[i])
        i++;
    return (i);
}

#include <stdio.h>
int main()
{
    char src[]="asdfg", dst[4];
    printf("%zu", ft_strlcpy(dst, src, sizeof(dst)));
    printf("\n%s", dst);
}