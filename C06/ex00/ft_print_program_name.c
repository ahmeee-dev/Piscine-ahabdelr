/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabdelr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:43:12 by ahabdelr          #+#    #+#             */
/*   Updated: 2024/11/18 16:58:09 by ahabdelr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int arc, char **arv)
{
	int	i;
	
	i = 0;
	if  (arc != 0)
	{
		while (arv[0][i])
		{
			write(1, &arv[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}
