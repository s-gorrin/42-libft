/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 12:19:33 by sgorrin           #+#    #+#             */
/*   Updated: 2018/02/24 22:51:21 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t n_len;

	n_len = ft_strlen(needle);
	if (needle == 0)
		return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack++ == *needle)
		{
			if (!ft_strncmp(haystack, needle, n_len))
				return ((char *)haystack);
		}
	}
	return (NULL);
}
