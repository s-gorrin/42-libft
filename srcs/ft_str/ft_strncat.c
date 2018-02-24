/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 13:37:04 by sgorrin           #+#    #+#             */
/*   Updated: 2018/02/22 13:51:59 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t ln1;
	size_t ln2;

	ln1 = ft_strlen(s1);
	ln2 = ft_strlen(s2);
	if (ln1 < n)
		ft_strcpy(&s1[ln1], s2);
	else 
	{
		ft_strncpy(&s1[ln1], s2, n);
		s1[ln1 + n] = '\0';
	}
	return (s1);
}
