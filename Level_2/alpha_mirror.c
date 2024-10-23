/*Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.
If the number of arguments is not 1, display only a newline.

Examples:
$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
==========================================================================================*/
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	ltr;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			ltr = argv[1][i];
			if (argv [1][i] >= 'A' && argv[1][i] <= 'Z')
				ltr = 'Z' - argv[1][i] + 'A';
			else if (argv [1][i] >= 'a' && argv[1][i] <= 'z')
				ltr = 'z' - argv[1][i] + 'a';
			else 
				ltr = argv[1][i];
			write(1, &ltr, 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
/*Przykład 1: Argument abc
'a':
ASCII 'a' = 97
Szyfr: ltr = 'z' - 'a' + 'a' = 122 - 97 + 97 = 122
Wynikowy znak: 'z' (ASCII 122)
'b':
ASCII 'b' = 98
Szyfr: ltr = 'z' - 'b' + 'a' = 122 - 98 + 97 = 121
Wynikowy znak: 'y' (ASCII 121)
'c':
ASCII 'c' = 99
Szyfr: ltr = 'z' - 'c' + 'a' = 122 - 99 + 97 = 120
Wynikowy znak: 'x' (ASCII 120*/