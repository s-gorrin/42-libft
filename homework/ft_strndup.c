/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 17:29:34 by sgorrin           #+#    #+#             */
/*   Updated: 2018/02/21 18:24:39 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char *ft_strndup(const char *s1, size_t n)
{
	char *dst;

	dst = (char *)malloc(sizeof(*s1));
	if (dst == '\0')
		return (NULL);
	while (*s1 && n--)
		*dst++ = *s1++;
	*dst = '\0';
	return (dst);
}
