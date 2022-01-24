/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 08:36:11 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/20 08:42:47 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;
	int				diff;

	a = 0;
	diff = 0;
	while ((a < n) && !diff && (s1[a] != '\0') && (s2[a] != '\0'))
	{
		diff = (unsigned char)s1[a] - (unsigned char)s2[a];
		a++;
	}
	if (a < n && !diff && (s1[a] == '\0' || s2[a] == '\0'))
		diff = (unsigned char)s1[a] - (unsigned char)s2[a];
	return (diff);
}

/*int	main(void)
{
	char *str1;
	char *str2;

	str1 = "";
	str2 = "dsa";
	printf("c  : %d\n", strncmp(str1, str2, 3));
	printf("ft : %d\n", ft_strncmp(str1, str2, 3));
}*/