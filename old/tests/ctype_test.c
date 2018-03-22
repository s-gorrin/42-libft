#include "libft.h"

int	main(void)
{
	assert(isalnum('9') == ft_isalnum('9'));
	assert(isalnum('a') == ft_isalnum('a'));
	assert(isalnum('!') == ft_isalnum('!'));
	printf("#");

	assert(isalpha('9') == ft_isalpha('9'));
	assert(isalpha('a') == ft_isalpha('a'));
	assert(isalpha('!') == ft_isalpha('!'));
	printf("#");

	assert(isascii('9') == ft_isascii('9'));
	assert(isascii('a') == ft_isascii('a'));
	assert(isascii(300) == ft_isascii(300));
	printf("#");

	assert(iscntrl(15) == ft_iscntrl(15));
	assert(iscntrl('\n') == ft_iscntrl('\n'));
	assert(iscntrl('!') == ft_iscntrl('!'));
	printf("#");

	assert(isdigit('9') == ft_isdigit('9'));
	assert(isdigit('a') == ft_isdigit('a'));
	assert(isdigit('!') == ft_isdigit('!'));
	printf("#");

	assert(isgraph('9') == ft_isgraph('9'));
	assert(isgraph('a') == ft_isgraph('a'));
	assert(isgraph(12) == ft_isgraph(12));
	printf("#");

	assert(islower('9') == ft_islower('9'));
	assert(islower('a') == ft_islower('a'));
	assert(islower('A') == ft_islower('A'));
	printf("#");

	assert(isprint(12) == ft_isprint(12));
	assert(isprint('a') == ft_isprint('a'));
	assert(isprint('!') == ft_isprint('!'));
	printf("#");

	assert(ispunct('9') == ft_ispunct('9'));
	assert(ispunct('a') == ft_ispunct('a'));
	assert(ispunct('!') == ft_ispunct('!'));
	printf("#");

	assert(isspace(' ') == ft_isspace(' '));
	assert(isspace('\n') == ft_isspace('\n'));
	assert(isspace('!') == ft_isspace('!'));
	printf("#");

	assert(isupper('A') == ft_isupper('A'));
	assert(isupper('a') == ft_isupper('a'));
	assert(isupper('!') == ft_isupper('!'));
	printf("#");

	assert(isxdigit('9') == ft_isxdigit('9'));
	assert(isxdigit('a') == ft_isxdigit('a'));
	assert(isxdigit('!') == ft_isxdigit('!'));
	printf("#");

	assert(tolower('A') == ft_tolower('A'));
	assert(tolower('a') == ft_tolower('a'));
	assert(tolower('!') == ft_tolower('!'));
	printf("#");

	assert(toupper('A') == ft_toupper('A'));
	assert(toupper('a') == ft_toupper('a'));
	assert(toupper('!') == ft_toupper('!'));
	printf("#");

	return (0);
}
