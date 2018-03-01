/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 17:07:20 by sgorrin           #+#    #+#             */
/*   Updated: 2018/02/28 17:13:19 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *r;

	if (!s || !f)
		return (NULL);
	r = (char*)malloc(sizeof(*s));
	if (!r)
		return (NULL);
	while (*s)
		*r++ = f(*s++);
	*r = '\0';
	return (r);
}
