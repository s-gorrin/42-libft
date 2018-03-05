#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	 assert (strcat("foo", "bar") == ft_strcat("foo", "bar"));
	 assert (strcat(" ", "bar" == ft_strcat(" ", "bar"));
	 assert (strcat("foo", " ") == ft_strcat("foo", " "));
	 assert (strcat(" ", " ") == ft_strcat(" ", " "));
	 printf("#");

	 assert (strchr("string", 'i') == ft_strchr("string", 'i'));
	 assert (strchr("string", 'a') == ft_strchr("string", 'a'));
	 assert (strchr("string", 0) == ft_strchr("string", 0));
	 assert (strchr("foobar", 55) == ft_strchr("foobar", 55));
	 printf("#");

	 assert (strcmp("string", "string") == ft_strcmp("string". "string"));
	 assert (strcmp("foo", "bar") == ft_strcmp("foo", "bar"));

}
