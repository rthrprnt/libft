/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apernot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:10:10 by apernot           #+#    #+#             */
/*   Updated: 2024/05/17 14:26:33 by apernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	char	cr;

	cr = (char)c;
	if (cr >= 'A' && cr <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("%d\n", ft_tolower(28)); 
	printf("%d\n", ft_tolower(50)); 
	printf("%d\n", toupper(28)); 
	printf("%d\n", toupper(50)); 
}*/
