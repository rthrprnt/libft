/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apernot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:44:17 by apernot           #+#    #+#             */
/*   Updated: 2024/05/17 14:08:58 by apernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	char	cr;

	cr = (char)c;
	if (cr >= 'a' && cr <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("%d\n", ft_toupper(28)); 
	printf("%d\n", ft_toupper(50)); 
	printf("%d\n", toupper(28)); 
	printf("%d\n", toupper(50)); 
}*/
