/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <zkarali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 09:54:50 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/25 15:33:19 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(char const *s, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] != c && (i == 0 || s[i - 1] == c))
            count++;
        i++;
    }
    return (count);
}

static int word_len(char const *s, char c)
{
    int len;

    len = 0;
    while (s[len] != c)
        len++;
    return (len);
}

static void free_all(char **result, int k)
{
    int i;

    i = 0;
    while (i < k)
    {    
        free(result[k]);
        i++;
    }
    free(result);
}

char **ft_split(char const *s, char c)
{
    char **result;
    int words;
    int len;
    int i;
    int j;
    
    words = count_words(s, c);
    result = malloc(sizeof(char *) * (words + 1));
    if (!words)
        return (NULL);
    i = 0;
    j = 0;
    while (j < words)
    {
        while (s[i] && s[i] == c)
            i++;
        len = word_len(&s[i], c);
        result[j] = malloc(sizeof(char) * (len + 1));
        if (!result[j])
        {
            free_all(result, j);
            return (NULL);
        }
        len = 0;
        while (s[i] && s[i] != c)
            result[j][len++] = s[i++];
        result[j][len] = '\0';
        j++;
    }
    result[j] = NULL;
    return (result);
}