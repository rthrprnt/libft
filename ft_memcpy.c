/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apernot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:00:40 by apernot           #+#    #+#             */
/*   Updated: 2024/05/16 16:17:11 by apernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_str;
	const unsigned char	*src_str;	

	dest_str = dest;
	src_str = src;
	i = 0;
	while (i < n)
	{
		dest_str[i] = src_str[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	str[] = "Hello les BG";
	char	str2[] = "Hello les BG";
	char	str3[] = "Hello les BG";

	ft_memcpy(str+3, str, 5);
	memcpy(str3+3, str3, 5);

	printf("%s\n", str);
	printf("%s\n", str3);
//	printf("%s\n", (char *)memmove(str2+3, str2, 5));

}
