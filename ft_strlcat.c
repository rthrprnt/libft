/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apernot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:50:15 by apernot           #+#    #+#             */
/*   Updated: 2024/05/17 13:43:57 by apernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	space_remaining;
	size_t	slen;
	size_t	dlen;
	size_t	i;

	slen = ft_strlen((const char *)src);
	dlen = ft_strlen((const char *)dst);
	if (dlen >= siz)
		return (siz + slen);
	space_remaining = siz - dlen - 1;
	i = 0;
	while (i < space_remaining && src[i])
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (slen + dlen);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	size_t	i;
	size_t	j;
	char	src[10] = "world";
	char	dst[100] = "hello";
	char	dst2[100] = "hello";

	i = ft_strlcat(dst, src, 1);
	j = strlcat(dst2, src, 1);
	printf("%zu\n", i);
	printf("%zu\n", j);
	printf("%s\n", dst);
	printf("%s\n", dst2);
	
}*/
