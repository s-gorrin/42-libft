/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 18:29:39 by sgorrin           #+#    #+#             */
/*   Updated: 2018/03/02 23:09:13 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *c1;
	unsigned char *c2;

	if (n == 0 || dst == src)
		return (dst);
	c1 = (unsigned char *)dst;
	c2 = (unsigned char *)src;
	while (--n && *c1 != (unsigned char)c)
	{
		*c1++ = *c2++;
	}
	*c1 = *c2;
	if (n == 0)
		return (0);
	else
		return ((void *)c1);
}
