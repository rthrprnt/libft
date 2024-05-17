/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apernot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:48:17 by apernot           #+#    #+#             */
/*   Updated: 2024/05/17 16:01:52 by apernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && i < n)
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main(int ac, char** av)
{
	printf("%d\n", ft_strncmp(av[1], av[2],(size_t)atoi(av[3])));
}*/
