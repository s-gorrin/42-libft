/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 18:37:00 by sgorrin           #+#    #+#             */
/*   Updated: 2018/02/22 12:41:06 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char *ft_strncpy(char *dst, const char *src, size_t len)
{
	char *d;
	const char *s;

	*d = dst;
	*s = src;
	while (len--)
	{
		if (*s)
			*d++ = *s++;
		else
			*d++ = '\0';
	}
	*d = '\0';
	return (dst);
}
