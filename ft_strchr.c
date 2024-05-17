/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apernot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:27:43 by apernot           #+#    #+#             */
/*   Updated: 2024/05/17 15:10:38 by apernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == 0)
		return ((char *)&s[i]); 
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char *ptr;
	const char s[5] = "abcd";
	
	ptr = ft_strchr(s, 0);

//	printf("%p\n", ft_strchr(s, 99));
	printf("%p\n", ptr);
	printf("%c\n", ptr[0]);


}*/
