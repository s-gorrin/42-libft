/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 16:36:44 by sgorrin           #+#    #+#             */
/*   Updated: 2018/02/20 17:11:10 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

int	ft_iscntrl(int c);
int	ft_isupper(int c);
int	ft_islower(int c);
int	ft_isalpha(int c);
int	ft_isspace(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_ispunct(int c);
int	ft_isgraph(int c);
int	ft_isprint(int c);
int	ft_isascii(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_isxdigit(int c);

#endif
