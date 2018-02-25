/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 14:46:19 by sgorrin           #+#    #+#             */
/*   Updated: 2018/02/24 22:49:11 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == 0)
	{
		while (*s++)
			;
		return ((char *)s);
	}
	while (*s++ != (char)c)
		;
	if (*s)
		return ((char *)s);
	else
		return (NULL);
}
