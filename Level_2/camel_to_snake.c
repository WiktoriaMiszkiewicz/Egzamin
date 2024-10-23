/*Assignment name  : camel_to_snake
Expected files   : camel_to_snake.c
Allowed functions: malloc, free, realloc, write
--------------------------------------------------------------------------------
Write a program that takes a single string in lowerCamelCase format
and converts it into a string in snake_case format.
A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.
A snake_case string is a string where each word is in lower case, separated by
an underscore "_".
Examples:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$*/
//I SPOSÓB BEZ MALLOCA
#include <unistd.h>
int	main(int argc, char **argv)
{
	int	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				write(1, "_", 1);//put it
				argv[1][i] += 32;//next is upper, change it
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
//2 SPOSÓB Z MALLOCIEM JEZELI BEDZIE TO KONIECZNE A NIE TYLKO ALLOW
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int		i = 0;
	int		j = 0;
	char	*new_str;

	if (argc == 2)
	{
		// Przydziel pamięć, zakładając maksymalnie podwojoną liczbę znaków
		new_str = (char *)malloc(sizeof(char) * (2 * 1000)); // Dla prostoty założono maksymalnie 1000 znaków
		if (!new_str)
			return (1); // Sprawdź, czy malloc się powiódł

		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				new_str[j++] = '_';               // Dodaj podkreślenie przed dużą literą
				new_str[j++] = argv[1][i] + 32;   // Zamień dużą literę na małą
			}
			else
			{
				new_str[j++] = argv[1][i];        // Kopiuj pozostałe znaki
			}
			i++;
		}
		new_str[j] = '\0'; // Zakończ ciąg null-terminatorem
		write(1, new_str, j); // Wypisz wynikowy ciąg
		free(new_str);        // Zwolnij pamięć
	}
	write(1, "\n", 1);
	return (0);
}
