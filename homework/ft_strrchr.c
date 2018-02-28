/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 17:47:58 by sgorrin           #+#    #+#             */
/*   Updated: 2018/02/27 16:02:21 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	while (*s++)
		;
	if (c == 0)
		return ((char *)s);
	while (*s-- != (char)c)
		;
	if (*s)
		return ((char *)s);
	else
		return (NULL);
}
