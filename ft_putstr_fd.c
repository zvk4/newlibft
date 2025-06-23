/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <zkarali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 15:48:59 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/23 15:47:57 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}
#include <fcntl.h>
int main()
{
    int fd;
    fd = open("deneme4.txt", O_RDWR | O_TRUNC | O_CREAT, 0644);
    ft_putstr_fd("1234567", fd);
    close(fd);
}