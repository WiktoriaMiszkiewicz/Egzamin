/*Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);*/

char	*ft_strrev(char *str)
{
	int		i;
	int		len = 0;
	char	tmp;

	len = 0;
	while (str[len])
	{
			len++;
	}
	i = 0;
	while (i < --len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
	}
	return (str);
}
/*Przykład:
Weźmy ciąg znaków "hello":
Krok 1: Obliczanie długości ciągu:
Funkcja zaczyna od policzenia długości ciągu. Dla "hello" długość wynosi 5 (len = 5).
Krok 2: Odwracanie znaków:
Inicjalizujemy zmienną i = 0 oraz zmienną len = 4 (czyli długość - 1).
W pętli, za każdym razem zamieniamy miejscami znaki znajdujące się na pozycji i i len. 
Po każdej iteracji i rośnie o 1, a len maleje o 1. Iteracja 1:
i = 0, len = 4.
Zamieniamy str[0] ('h') z str[4] ('o').
Wynik po tej zamianie: "oellh".
Iteracja 2:
i = 1, len = 3.
Zamieniamy str[1] ('e') z str[3] ('l').
Wynik po tej zamianie: "olleh".
Iteracja 3:
i = 2, len = 2.
Pętla przerywa działanie, ponieważ i == len.
Krok 3: Zwracanie odwróconego ciągu:
Funkcja zwraca wskaźnik do nowo odwróconego ciągu, który teraz wygląda tak: "olleh".
Przykład pełnego działania funkcji w programie:
c
*/

#include <stdio.h>

char *ft_strrev(char *str);

int main()
{
    char str[] = "hello";
    printf("Przed odwróceniem: %s\n", str);
    printf("Po odwróceniu: %s\n", ft_strrev(str));
    return 0;
}