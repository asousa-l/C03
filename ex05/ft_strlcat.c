/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:17:34 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/20 09:36:24 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_len(char *dest)
{
	unsigned int	c;

	c = 0;
	while (dest[c] != '\0')
		c++;
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*a;
	char			*s;
	unsigned int	a_len;
	unsigned int	r;

	a = dest;
	s = src;
	r = size;
	while (r-- != 0 && *a != '\0')
		a++;
	a_len = a - dest;
	r = size - a_len;
	if (r == 0)
		return (a_len + str_len(src));
	while (*src != '\0')
	{
		if (r > 1)
		{
			*a++ = *src;
			r--;
		}
		src++;
	}
	*a = '\0';
	return (a_len + (src - s));
}
