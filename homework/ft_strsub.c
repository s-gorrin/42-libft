/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 17:50:23 by sgorrin           #+#    #+#             */
/*   Updated: 2018/02/28 18:07:12 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *r;

	if (start > (ft_strlen(s) - len))
		return (NULL);
	r = (char *)malloc(sizeof(char) * len);
	if (!r)
		return (NULL);
	while (start--)
		*s++;
	while (len-- && *s)
		*r++ = *s++
	*r = '\0';
	if (len)
		return (NULL)
	return (r);
}
