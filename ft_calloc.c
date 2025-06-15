/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <zkarali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:39:58 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/11 13:45:19 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

#include <stdio.h>
int main()
{
	size_t count = 10;
	int *array;
	array = ft_calloc(count, sizeof(int));
	int i = 0;
	while (i < 10)
	{
		printf("%d", array[i]);
		i++;
	}
	free(array);
}

// tamamlanmadı, If nmemb or size is 0, then calloc() returns a unique
// pointer value that can be successfully passed to free()