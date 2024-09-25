/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:19:38 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/05 14:26:14 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

# define F	r += ft_printf
# define G	get_next_line


int main(void)
{
    int	r;

	r = 0;
	F("Simple printf test\n");
	F("");
	F("--Format---");
	F("\n");
	F("%d\n", 0);
	F("%d\n", 42);
	F("%d\n", 1);
	F("%d\n", 5454);
	F("%d\n", (int)2147483647);
	F("%d\n", (int)2147483648);
	F("%d\n", (int)-2147483648);
	F("%d\n", (int)-2147483649);
	F("\n");
	F("%x\n", 0);
	F("%x\n", 42);
	F("%x\n", 1);
	F("%x\n", 5454);
	F("%x\n", (int)2147483647);
	F("%x\n", (int)2147483648);
	F("%x\n", (int)-2147483648);
	F("%x\n", (int)-2147483649);
	F("%x\n", (int)0xFFFFFFFF);
	F("\n");
	F("%s\n", "");
	F("%s\n", "toto");
	F("%s\n", "wiurwuyrhwrywuier");
	F("%s\n", NULL);
	F("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", NULL);
	F("\n--Mixed---\n");
	F("%d%x%d%x%d%x%d%x\n", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648);
	F("-%d-%x-%d-%x-%d-%x-%d-%x-\n", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648);
	F("\n");
	F("%s%s%s%s\n", "", "toto", "wiurwuyrhwrywuier", NULL);
	F("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", NULL);
	printf("written: %d\n", r);


    F("Simple get_next_line test:\n\n");
    char	*line;
    int fd = open("file", O_RDONLY | O_CREAT);
    t_list *list;


	while ((line = G(fd)) != NULL)
	{
		F("%s", line);
        add_to_list(line, &list);
		// free(line);
		line = NULL;
	}
	F("%s \n", line);
    F("reading from stdin:\n\n");

    while ((line = G(fd)) != NULL)
	{
		F("%s", line);
        add_to_list(line, &list);
		// free(line);
		line = NULL;
	}
	F("%s \n", line);
    ft_lst_clear(&list);
    return (0);
}
