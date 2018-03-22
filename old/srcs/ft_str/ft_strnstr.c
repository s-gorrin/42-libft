/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 17:47:50 by sgorrin           #+#    #+#             */
/*   Updated: 2018/03/02 23:22:27 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
			{
				if (!ft_strncmp(haystack, needle, len))
					return ((char *)haystack);
			}
			else if (len > n_len)
			{
				if (!ft_strncmp(haystack, needle, n_len))
					return ((char *)haystack);
			}
		}
	}
	return (NULL);
}
