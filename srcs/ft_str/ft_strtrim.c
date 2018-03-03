/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 23:59:55 by sgorrin           #+#    #+#             */
/*   Updated: 2018/03/02 23:34:03 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace_trim(char c)
{
	if (c == '\t' || c == '\n' || c == ' ')
		return (1);
	else
		return (0);
}

char	*ft_strtrim(char const *s)
{
	char	*b;
	char	*r;
	int	n;
	int	e;

	b = (char *)s;
	n = 0;
	e = 0;
	while (ft_isspace_trim(*b++))
		n++;
	if (!*b)
		return (NULL);
	while (*b++)
		;
	while (ft_isspace_trim(*b--))
		e++;
	r = (char *)malloc(sizeof(*b) - (e + n));
	while (n-- && *s++)
		;
	while (!ft_isspace_trim(*s))
		*r++ = *s++;
	*r = '\0';
	return (r);
}
