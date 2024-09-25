/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <ksohail-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:25:07 by jlebre            #+#    #+#             */
/*   Updated: 2024/01/31 21:22:06 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *push_line(char *remains)
{
    int i;
    char *array;

    i = 0;
    while (remains[i] && remains[i] != '\n')
        i++;
    if (remains[i] == '\n')
		i++;
    if (!(array = (char *)malloc(sizeof(char) * (i + 1))))
        return (NULL);
    i = 0;
    while (remains[i] && remains[i] != '\n')
    {
        array[i] = remains[i];
        i++;
    }
	if (remains[i] == '\n')
	{
		array[i] = '\n';
		array[i + 1] = '\0';
		return (array);
	}
    array[i] = '\0';
    return (array);
}

char    *cut_next_line(char *remains)
{
    int i;
    int j;
    char *array;

    i = 0;
    j = 0;
    while (remains[i] && remains[i] != '\n')
        i++;
    if (!remains[i])
    {
        free(remains);
        return (NULL);
    }
    if (!(array = (char *)malloc(sizeof(char) * (ft_strlen(remains) - i + 1))))
        return (NULL);
    i++;
    while (remains[i])
    {
        array[j] = remains[i];
        i++;
        j++;
    }
    array[j] = '\0';
    free(remains);
    return (array);
}

char    *ft_strjoin_gnl(char *remains, char *buffer)
{
    char *array;
    unsigned int size;
    int i;
    int j;

    if (!remains && !buffer)
        return (NULL);
    size = ft_strlen(remains) + ft_strlen(buffer);
    if (!(array = (char *)malloc(sizeof(char) * (size + 1))))
        return (NULL);
    i = 0;
    j = 0;
    if (remains)
    {
        while (remains[i])
            array[j++] = remains[i++];
        i = 0;
    }
    while (buffer[i])
        array[j++] = buffer[i++];
    array[size] = '\0';
    free(remains);
    return (array);
}

bool ft_strchr_newline(char *line)
{
	int i = 0;

	while (line[i])
	{
		if (line[i] == '\n')
			return (true);
		i += 1;
	}
	return (false);
}
