/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <zkarali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 14:15:20 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/19 16:24:47 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    int len;
    char *str;

    i = 0;
    len = ft_strlen(s);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    while (i < len)
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}

char plustwo(unsigned int i, char c)
{
    char str;

    (void)i;
    str = c + 2;
    return (str);
}

#include <stdio.h>
int main()
{
    char s[]="abc";
    char *a = ft_strmapi(s, *plustwo);
    printf("%s", a);
    free(a);
}