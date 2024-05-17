/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apernot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:27:10 by apernot           #+#    #+#             */
/*   Updated: 2024/05/17 15:47:42 by apernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int)ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

#include <stdio.h>
int	main(void)
{
	char *ptr;
	const char s[5] = "abiad";
	
	ptr = ft_strrchr(s, 0);

//	printf("%p\n", ft_strchr(s, 99));
	printf("%p\n", ptr);
	printf("%c\n", ptr[0]);


}
