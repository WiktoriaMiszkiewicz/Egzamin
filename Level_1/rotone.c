/*Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.
Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>*/
#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	char	letter;
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
				letter = argv[1][i] + 1;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				letter = argv[1][i] + 1;
			else if (argv[1][i] == 'z')
				letter = 'a';
			else if (argv[1][i] == 'Z')
				letter = 'A';
			else
				letter = argv[1][i]; //dla znaków niealfabetycznych
			write(1, &letter, 1);
			i ++;
		}
	}
	write(1, "\n", 1); //dodanie nowej linii po przetworzeniu wszystkich zanków
	return (0);
}
