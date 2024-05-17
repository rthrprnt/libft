/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apernot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:35:09 by apernot           #+#    #+#             */
/*   Updated: 2024/05/16 17:51:25 by apernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_str;
	unsigned char	*src_str;

	dest_str = (unsigned char *)dest;
	src_str = (unsigned char *)src;
	i = 0;
	if (dest_str < src_str)
	{
		while (i < n)
		{
			dest_str[i] = src_str[i];
			i++;
		}
	}
	else
	{	
		i = n - 1;
		while (i > 0)
		{
			dest_str[i] = src_str[i];
			i--;
		}
		dest_str[i] = src_str[i];
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[50] = "ABCDEFGHIJKLMN";
	char	str2[50] = "ABCDEFGHIJKLMN";

	printf("%s\n", (char *)ft_memmove(str + 5, str, 5));
	printf("%s\n", (char *)memmove(str2 + 5, str2, 5));
}*/
