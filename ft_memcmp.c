/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apernot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:35:44 by apernot           #+#    #+#             */
/*   Updated: 2024/05/17 16:58:01 by apernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] && str2[i] && str1[i] == str2[i] && i < n)
		i++;
	return ((int)str1[i] - (int)str2[i]);
}
	
#include <stdio.h>
int	main(int ac, char** av)
{
	printf("%d\n", ft_memcmp((const void *)av[1],(const void *)av[2],(size_t)atoi(av[3])));
	printf("%d\n", memcmp((const void *)av[1], (const void *)av[2],(size_t)atoi(av[3])));
}

