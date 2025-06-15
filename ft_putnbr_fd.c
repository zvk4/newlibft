/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <zkarali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 15:59:22 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/15 16:53:43 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        ft_putchar_fd('-', fd);
        ft_putchar_fd('2', fd);
        ft_putchar_fd('1', fd);
        ft_putchar_fd('4', fd);
        ft_putchar_fd('7', fd);
        ft_putchar_fd('4', fd);
        ft_putchar_fd('8', fd);
        ft_putchar_fd('3', fd);
        ft_putchar_fd('6', fd);
        ft_putchar_fd('4', fd);
        ft_putchar_fd('8', fd);
        return;
    }
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }
    if (n >= 9)
        ft_putnbr_fd(n / 10, fd);
    ft_putchar_fd((n % 10) + '0', fd);
}

int main(){
    ft_putnbr_fd(-2147483648, 1);
}