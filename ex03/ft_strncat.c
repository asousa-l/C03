/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 08:53:12 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/20 08:58:57 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*a;

	a = dest;
	while (*a != '\0')
		a++;
	while (*src != '\0' && nb > 0)
	{
		*a = *(unsigned char *)src;
		a++;
		src++;
		nb--;
	}
	*a = '\0';
	return (dest);
}
