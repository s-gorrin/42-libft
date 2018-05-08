/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 19:42:59 by sgorrin           #+#    #+#             */
/*   Updated: 2018/05/07 19:43:01 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

char	*ft_itoa_base(int n, size_t base)
{
	int		n2;
	int		sign;
	int		len;
	char	*ret;

	if (base > 36 || base < 2)
		return (NULL);
	if (n == 0)
		return (ft_strdup("0"));
	n2 = n;
	len = n < 0 ? 2 : 1;
	while ((n2 /= base))
		len++;
	if (!(ret = ft_strnew(len)))
		return (NULL);
	sign = n < 0 ? -1 : 1;
	if (sign < 0)
		ret[0] = '-';
	while (n != 0)
	{
		ret[--len] = ((n % base) * sign) + ((n % base) < 10 ? '0' : 'a' - 10);
		n /= base;
	}
	return (ret);
}
