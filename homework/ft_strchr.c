/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 14:46:19 by sgorrin           #+#    #+#             */
/*   Updated: 2018/02/22 15:00:15 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char *ft_strchr(const char *s, int c)
{
	if (c == 0)
		return (s[ft_strlen(s)]);
	while (s++ != (char)c)
		;
	if (*s)
		return (*s);
	else
		return (NULL);
}
