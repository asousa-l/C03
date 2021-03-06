/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 08:44:54 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/20 08:59:44 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*a;

	a = dest;
	while (*a != '\0')
		a++;
	while (*src != '\0')
	{
		*a = *(unsigned char *)src;
		a++;
		src++;
	}
	*a = '\0';
	return (dest);
}
