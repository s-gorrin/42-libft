/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 14:46:19 by sgorrin           #+#    #+#             */
/*   Updated: 2018/03/02 23:04:24 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
