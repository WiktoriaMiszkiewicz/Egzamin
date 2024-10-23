/*Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>*/
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				argv[1][i] = (argv[1][i] - 'a' + 13) % 26 + 'a';
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
					argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
	/*
PRZYKŁAD DZIAŁANIA................................
argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
Teraz zróbmy krok po kroku dla litery 'Z':

argv[1][i] - 'A': To daje 25, ponieważ 'Z' - 'A' = 25 (pozycja 'Z' w alfabecie wynosi 25).
25 + 13: Dodajemy 13, co daje 38.
38 % 26: Modulo 26 pozwala nam wrócić do alfabetu. 38 % 26 = 12.
12 + 'A': Dodajemy z powrotem wartość ASCII 'A' (czyli 65), co daje 12 + 65 = 77, co odpowiada literze 'M'.
	*/