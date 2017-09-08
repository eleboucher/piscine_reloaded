/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 18:57:52 by elebouch          #+#    #+#             */
/*   Updated: 2017/09/08 18:58:12 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int k;

	i = -1;
	k = 0;
	while (tab[++i])
	{
		if ((*f)(tab[i]) == 1)
			++k;
	}
	return (k);
}