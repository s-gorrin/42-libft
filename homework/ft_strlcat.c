/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 17:47:41 by sgorrin           #+#    #+#             */
/*   Updated: 2018/02/26 17:47:44 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	char *d;
	const char *s;
	size_t n;
	size_t dlen;

	d = dst;
	s = src;
	n = siz;
	while (n-- != 0 && *d++ != '\0')
		;
	dlen = d - dst;
	n = siz - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s++ != '\0')
		if (n-- != 1)
			*d++ = *s;
	*d = '\0';
	return (dlen + (s - src));
}
