/*Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "forty two" "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuooixq " | cat -e
forty two$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$*/
#include <unistd.h>

void	wdmatch(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	while (s1[i] != '\0')
	{
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				i++;
				break;//Wewnętrzna pętla while przeszukuje znaki z s2, aby znaleźć każdy kolejny znak z s1. 
        //Jeśli znaki są równe, wychodzimy z pętli (stąd break), 
        //ponieważ nie ma potrzeby dalszego przeszukiwania bieżącego znaku s1.
			}
			j++;
		}
		if (s2[j] == '\0' && s1[i] != '\0')
		{
			write(1, "\n", 1);
			return;
      //Ten fragment sprawdza, czy doszliśmy do końca s2 (oznaczonego znakiem \0), 
      //ale nie doszliśmy jeszcze do końca s1. Jeśli tak się dzieje, oznacza to, że nie znaleźliśmy 
      //wszystkich znaków z s1 w s2 w odpowiedniej kolejności,
      // więc wypisujemy tylko nową linię (\n) i kończymy działanie programu (return).
		}
	}
	write(1, s1, i);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	else
		write(1, "\n", 1);
	return (0);
}