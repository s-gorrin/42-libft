/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 16:08:02 by sgorrin           #+#    #+#             */
/*   Updated: 2018/02/27 16:52:39 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strequ(char const *s1, char const *s2)
{
	while (*s1++ == *s2++ && *s1)
		;
	if (!*s1 && !*s2)
		return (1);
	else
		return (0);
}