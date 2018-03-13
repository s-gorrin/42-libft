/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 12:44:00 by sgorrin           #+#    #+#             */
/*   Updated: 2018/03/12 18:08:04 by snake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdlib.h>

#include <stdio.h>
static int	wc(char const *s, char c)
{
	size_t	i;
	int	count;

	i = 0;
	count = 0;
	if (s[i] != c && s[i])
		count = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			count++;
		i++;
	}
	return (count);
}

static size_t	len(char const *s, char c, size_t i)
{
	size_t	l;

	l = 0;
	while (s[i] != c && s[i])
	{
		i++;
		l++;
	}
	return (l);
}

/*static char	*dup(char const *s, size_t i, size_t len)
{
	char	*sub;
	size_t	j;

	j = 0;
	sub = (char *)malloc(sizeof(char) * len + 1);
	while (i < len)
	{
		sub[j] = s[i];
		i++;
		j++;
	}
	sub[j] = '\0';
	return (sub);
}*/

char		**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int	words;
	int	tmp;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	words = wc(s, c);
	ret = (char **)malloc(sizeof(char *) * (words + 1));
	while (s[i])
	{
		while (s[i] == c)
			i++;
		tmp = len(s, c, i);
		if (s[i])
			ret[j++] = strndup(s + i, tmp);
//		while (s[i] != c && s[i])
//			i++;
		i += tmp;
		printf("%p\n", ret[j - 1]);
	}
	printf("%p\n", ret[j]);
	ret[j] = 0;
	return (ret);
}

int		main(/*int ac, char **av*/)
{
	char	**split;
	char	str[] = "*split*me*up*";
	char	c = '*';
	int	i;

	i = 0;
//	str = strdup(av[1]);
//	c = av[2][0];
//	if (ac != 3)
//		printf("%d\n", ac);
	split = ft_strsplit((char const *)str, c);
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}
