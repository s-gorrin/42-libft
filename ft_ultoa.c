/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 18:56:03 by sgorrin           #+#    #+#             */
/*   Updated: 2018/05/10 16:12:31 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ultoa(unsigned long n)
{
	long	n2;
	int		len;
	char	*ret;

	if (n == 0)
		return (ft_strdup("0"));
	len = 1;
	n2 = n;
	while ((n2 /= 10))
		len++;
	if (!(ret = ft_strnew(len)))
		return (NULL);
	while (n != 0)
	{
		ret[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (ret);
}
