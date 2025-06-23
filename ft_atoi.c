/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <zkarali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:52:04 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/23 19:43:05 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int find_sign(const char *str, int i)
{
    int sign;

    sign = 1;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '+')
            i++;
        else
            (sign = -1);
    }
    return (sign);
}

int ft_atoi(const char *nptr)
{
    int i;
    int result;
    int sign;

    i = 0;
    result = 0;
    sign = 1;
    while ((nptr[i] == ' ') || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    if (find_sign(nptr, i) == -1)
    {    
        sign = -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = result * 10 + (nptr[i] - '0');
        i++;
    }
    return (sign * result);
}