/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 23:32:21 by sgorrin           #+#    #+#             */
/*   Updated: 2018/02/20 13:01:54 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ispunct(int c)
{
	if ((c >= '!' && c <= '\'') || (c >= '(' && c <= '/') ||
		(c >= ':' && c <= '?') || (c >= '[' && c <= '_') ||
		(c >= '{' && c <= '~') || (c == '@') || (c == '`'))
		return (1);
	else
		return (0);
}