/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <zkarali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:39:58 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/23 19:29:36 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void	*ptr;

	if (nmemb == 0 || size == 0)
        return (malloc(0));
	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

#include <stdio.h>
int main()
{
	int *array= ft_calloc('a', 10);
	int i = 0;
	while (i < 10)
	{
		printf("%d", array[i]);
		i++;
	}
	free(array);
}