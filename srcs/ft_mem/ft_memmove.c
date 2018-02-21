/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 19:47:38 by sgorrin           #+#    #+#             */
/*   Updated: 2018/02/20 20:16:17 by sgorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst < src)
		ft_memcpy(dst, src, len);
	if (dst > src)
		ft_memcpy_bwd(dst, src, len);
	return (dst);
}
