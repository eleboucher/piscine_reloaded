/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 19:03:39 by elebouch          #+#    #+#             */
/*   Updated: 2017/09/08 19:03:59 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	c;

	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		return (1);
	while (read(fd, &c, 1))
	{
		if (c != EOF)
			ft_putchar(c);
	}
	return (0);
}
