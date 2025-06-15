/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <zkarali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:25:41 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/11 13:43:42 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    int i;
    char *copy;

    i = 0;
    while (s[i])
        i++;
    copy = (char *)malloc(sizeof(char) * (i + 1));
    if (!copy)
        return (0);
    i = 0;
    while (s[i])
    {
        copy[i] = s[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}

#include <stdio.h>
int main(){
    char a[]= "asdfgh";
    char *b= ft_strdup(a);
    printf("%s\n", b);
    free(b);
} 