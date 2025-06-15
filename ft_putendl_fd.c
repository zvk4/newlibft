/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <zkarali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 15:53:17 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/15 15:58:41 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(fd, "\n", 1);
}

int main(){
    ft_putendl_fd("asdfghj0", 0);
    ft_putendl_fd("asdfghj1", 1);
    ft_putendl_fd("asdfghj2", 2);
    ft_putendl_fd("asdfghj3", 3);
}