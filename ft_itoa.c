/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <zkarali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 10:36:07 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/15 14:12:25 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void reverse(char *s)
{
    int i;
    int start;
    char temp;
    
    i = 0;
    while(s[i])
        i++;
    start = 0;
    while (i > start)
    {
        temp = s[start];
        s[start] = s[i - 1];
        s[i - 1] = temp;
        i--;
        start++;
    }
}

char *ft_itoa(int n)
{
    int i;
    int sign;
    char *str;
    
    i = 0;
    sign = (n < 0) ? -1 : 1;
    str = (char *)malloc(12);
    if (!str)
        return (NULL);
    if (n == 0)
        str[i++] = '0';
    else
    {
        if (sign == -1)
            n = -n;
    }
    while (n > 0)
    {
        str[i++] = (n % 10) + '0';
        n /= 10;
    }
    if (sign == -1)
        str[i++] = '-';
    reverse(str);
    str[i] = '\0';
    return (str);
}

// -2147483648 gibi bir değere karşı koruma yok

#include <stdio.h>
int main()
{
    char *s= ft_itoa(-10);
    printf("%s", s);
    free(s);
}

