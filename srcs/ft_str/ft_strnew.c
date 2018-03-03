/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 14:54:41 by sgorrin           #+#    #+#             */
/*   Updated: 2018/02/27 16:02:01 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size)
{
	char *str;

	str = (char *)malloc(sizeof(*str) * size);
	if (!str)
		return (NULL);
	str = ft_memset(str, 0, size + 1);
	return (str);
}
