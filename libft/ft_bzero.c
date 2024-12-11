/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabdelr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:32:04 by ahabdelr          #+#    #+#             */
/*   Updated: 2024/12/10 11:49:41 by ahabdelr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_b_zero(void *s, size_t t)
{
	size_t	i;
	char	*s_char;

	s_char = (char *)s;
	i = 0;
	while (i < t)
	{
		s_char[i] = '\0';
		i++;
	}
	s = s_char;
}