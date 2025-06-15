/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <zkarali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:47:46 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/11 14:47:26 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *str;

    i = 0;
    if (start >= ft_strlen(s))
    {
        str = malloc(1);
        if (!str)
            return (NULL);
        str[0] = '\0';
            return (str);
    }
    str = (char *)malloc((len + 1) * (sizeof(char)));
    if (!str)
        return (NULL);
    while (s[i + start] && i < len)
    {
        str[i] = s[i + start];
        i++;
    }
    str[i] = '\0';
    return (str);
}
#include <stdio.h>
int main(){
    char a[] = "asdf";
    int i = 3;
    int j = 2;
    char *str = ft_substr(a, i, j);
    if (str)
    {
        printf("%s\n", str);
        free(str);
    }
}