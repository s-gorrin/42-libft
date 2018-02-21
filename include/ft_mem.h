/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 17:28:34 by sgorrin           #+#    #+#             */
/*   Updated: 2018/02/20 20:11:26 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEM_H
# define FT_MEM_H
# include <string.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *s1, const void *s2, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memcpy_bwd(void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_memcmp(const void *str1, const void *str2, size_t n);

#endif
