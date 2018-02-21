/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 14:51:35 by sgorrin           #+#    #+#             */
/*   Updated: 2018/02/20 17:39:28 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

int	ft_atoi(char *str)
{
	int i;
	int sign;

	i = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
	{
		str++;
		if (!ft_isdigit(*str))
			return (0);
	}
	if (*str == '-')
	{
		str++;
		sign = -1;
	}
	while (ft_isdigit(*str))
	{
		i = i * 10 + *str - '0';
		str++;
	}
	return (i * sign);
}
