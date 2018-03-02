/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 16:55:07 by sgorrin           #+#    #+#             */
/*   Updated: 2018/03/01 17:22:27 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inlude "libft.h"

char	*ft_itoa(int n)
{
	char	*num;

	if (!(num = (char *)malloc(sizeof(char) * 10)))
		return (NULL);
	if (n == 0)
		return ((num = "0"));
	if (n == -2147483648)
		return ((num = "-2147483648"));
	if (n < 0)
	{
		*num++ = '-';
		n *= -1;
	}
	while (n != 0)
	{
		*num++ = (n % 10) + '0';
		n /= 10;
	}
	*num = '\0';
	return (num);
}
