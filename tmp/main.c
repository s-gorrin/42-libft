#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("%d", ft_atoi(av[1]));
	return (0);
}
