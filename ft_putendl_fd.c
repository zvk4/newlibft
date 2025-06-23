/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <zkarali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 15:53:17 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/23 15:36:37 by zkarali          ###   ########.fr       */
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

#include <fcntl.h>
int main(){
    int fd;
    fd=open("deneme2.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
    if(fd == -1)
        return (1);
    ft_putendl_fd("KGLG", fd);
    close(fd);
}