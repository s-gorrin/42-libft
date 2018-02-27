/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 17:47:50 by sgorrin           #+#    #+#             */
/*   Updated: 2018/02/26 17:47:52 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t n_len;

	n_len = ft_strlen(needle);
	if (needle == 0)
		return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack++ == *needle)
		{
			if (len < n_len)
				if (!ft_strncmp(haystack, needle, len))
					return ((char *)haystack);
			else if (len > n_len)
				if (!ft_strncmp(haystack, needle, n_len))
					return ((char *)haystack);
		}
	}
	return (NULL);
}
