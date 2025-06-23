/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <zkarali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 16:59:13 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/19 16:39:57 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

void plustwo(unsigned int i, char *c)
{
    (void)i;
    *c += 2;
}

#include <stdio.h>
int main(){
    char s[] = "abc";
    ft_striteri(s, plustwo);
    printf("%s", s);
}