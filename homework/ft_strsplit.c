/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 20:00:27 by sgorrin           #+#    #+#             */
/*   Updated: 2018/03/01 16:54:39 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int	n;
	char	**check;
	char	**r;

	check = s;
	n = 0;
	if (!(r = (char**)malloc(sizeof(*s))))
		return (NULL);
	while (*s)
	{
		if (*s == c)
		{
			while (*s == c)
				*s++;
			if (!*s)
				n = 1;
			if (s == check && n++ < 1 && *r++)
				**r = '\0';
		}
		n = 0;
		*s++ = **r++;
	}
	**r = '\0';
	return (**r);
}
