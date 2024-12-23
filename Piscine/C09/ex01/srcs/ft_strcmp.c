/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabdelr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:18:39 by ahabdelr          #+#    #+#             */
/*   Updated: 2024/11/21 18:59:26 by ahabdelr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i + 1] != '\0') && (s2[i + 1] != '\0') && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
