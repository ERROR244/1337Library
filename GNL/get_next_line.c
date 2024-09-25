/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <ksohail-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:45:12 by ksohail-          #+#    #+#             */
/*   Updated: 2024/01/31 21:21:48 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char     *get_next_line(int fd)
{
    if (fd < 0 || read(fd, NULL, 0) < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    char buffer[BUFFER_SIZE + 1];
    buffer[0] = '\0';
    static char *remains;
	char *line;
    int count;

    count = 1;
    while (!ft_strchr_newline(buffer) && count != 0)
    {
        if ((count = read(fd, buffer, BUFFER_SIZE)) == (-1))
            return (NULL);
        buffer[count] = '\0';
        remains = ft_strjoin_gnl(remains, buffer);
    }
    line = push_line(remains);
    remains = cut_next_line(remains);
	if (line[0] == '\0')
    {
        free(line);
        return (NULL);
    }
    return (line);
}
