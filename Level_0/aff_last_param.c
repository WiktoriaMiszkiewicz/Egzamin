/*Assignment name  : aff_last_param
Expected files   : aff_last_param.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes strings as arguments, and displays its last
argument followed by a newline.

If the number of arguments is less than 1, the program displays a newline.

Examples:

$> ./aff_last_param "Zelda" "is" "a" "boy" | cat -e
boy$
$> ./aff_last_param "I read this on internet !" | cat -e
I read this on internet !$
$> ./aff_last_param | cat -e
$*/

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	i = 0;
	if (argc > 1)
	{
		while(argv[argc - 1][i])
			write(1, &argv[argc - 1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}