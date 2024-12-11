/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabdelr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:02:44 by ahabdelr          #+#    #+#             */
/*   Updated: 2024/12/10 18:06:50 by ahabdelr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(char *s1, char *s2, size_t size)
{
	size_t	i;

	i = 0;
	while ((s1[i] == s2[i]) && i < size)
		i++;
	return (s1[i]-s2[i]);
}