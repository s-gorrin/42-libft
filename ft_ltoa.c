/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 18:56:03 by sgorrin           #+#    #+#             */
/*   Updated: 2018/05/10 16:11:40 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ltoa(long n)
{
	long	n2;
	int		sign;
	int		len;
	char	*ret;

	if (n == 0)
		return (ft_strdup("0"));
	n2 = n;
	len = n < 0 ? 2 : 1;
	while ((n2 /= 10))
		len++;
	if (!(ret = ft_strnew(len)))
		return (NULL);
	sign = n < 0 ? -1 : 1;
	if (sign < 0)
		ret[0] = '-';
	while (n != 0)
	{
		ret[--len] = ((n % 10) * sign) + '0';
		n /= 10;
	}
	return (ret);
}
