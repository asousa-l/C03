/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:00:57 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/20 09:16:30 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	if (*to_find == '\0')
		return (*str);
	a = str;
	b = to_find;
	while (true)
	{
		if (*b == '\0')
			return ((char *)(a - (b - to_find)));
		if (*a == *b)
			b++;
		else
			b = to_find;
		if (*a == '\0')
			break ;
		a++;
	}
	return (0);
}
