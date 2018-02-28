/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 22:58:55 by sgorrin           #+#    #+#             */
/*   Updated: 2018/02/27 00:50:51 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Haha nevermind, this only works of integers.
*/

double	ft_pow(double x, double y)
{
	double n;

	n = x;
	if (y == 0)
	{
		if (x < 0)
			return (-1);
		else
			return (1);
	}
	if (y >= 1)
		while (y-- > 1)
			n = (n * x);
	else
	{
		if (n == 0)
			return (NULL);
		y = (y * -1);
		while (y-- > 1)
			n = (n / y);
	}
	return (n);
}
