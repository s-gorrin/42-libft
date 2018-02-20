#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(char *str);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *s1, const void *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlen(const char *s);
int		ft_iscntrl(int c);
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isalpha(int c);
int		ft_isspace(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_ispunct(int c);
int		ft_isgraph(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isxdigit(int c);

#endif
