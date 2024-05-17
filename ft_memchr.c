/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apernot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:03:48 by apernot           #+#    #+#             */
/*   Updated: 2024/05/17 16:33:18 by apernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char *str;

	str = (const unsigned char *)s;
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == c)	
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	char str[10] = "Hella";
	char *ptr;

	ptr = (char *)ft_memchr(str, 'a', 3);

	printf("%c\n", ptr[0]);
}*/
