/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <zkarali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 15:59:22 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/23 15:42:01 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long nb;

    nb = n;
    if (nb < 0)
    {
        ft_putchar_fd('-', fd);
        nb = -nb;
    }
    if (nb >= 9)
        ft_putnbr_fd(nb / 10, fd);
    ft_putchar_fd((nb % 10) + '0', fd);
}
#include <fcntl.h>
int main(){
    int fd;
    fd = open("ddeneme3.txt", O_RDWR | O_APPEND | O_CREAT, 0644);
    ft_putnbr_fd(-2147483648, fd);
    close(fd);
}