/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 14:53:01 by sgorrin           #+#    #+#             */
/*   Updated: 2018/02/20 17:39:53 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	len;
	size_t	len2;
	int		result;

	len = ft_strlen(s1) + 1;
	len2 = ft_strlen(s2) + 1;
	len = (len <= len2) ? len : len2;
	result = (int)ft_memcpy((void *)s1, (void *)s2, len);
	return (result);
}
