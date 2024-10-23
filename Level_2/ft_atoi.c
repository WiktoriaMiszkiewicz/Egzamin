/*Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------
Write a function that converts the string argument str to an integer (type int)
and returns it.
It works much like the standard atoi(const char *str) function, see the man.
Your function must be declared as follows:
int	ft_atoi(const char *str);*/

int ft_atoi(const char *str)
{
  int i = 0;
  int sign = 1;
  int result = 0;

//pomijamy spacje i inne biale znaki
while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
  i++;
//sprawdzamy znak minusa zeby ustawic
if (str[i] == '-')
  sign = -1;
//przesuwamy wskaznik jezeli to minus lub plus aby przejsc juz do cyfr
if (str[i] == '-' || str[i] == '+')
  i++;
//konwersja cyfr na liczbę
while (str[i] >= '0' && str[i] <= '9')
{
  result = result * 10 + (str[i] - '0');
  i++;
}
 return (sign * result);  
}

#include <stdio.h>

int main(void)
{
    char str1[] = "  -123abc";
    char str2[] = "42";
    char str3[] = "   +987";
    char str4[] = "   -0";
    printf("String: '%s' -> Integer: %d\n", str1, ft_atoi(str1));
    printf("String: '%s' -> Integer: %d\n", str2, ft_atoi(str2));
    printf("String: '%s' -> Integer: %d\n", str3, ft_atoi(str3));
    printf("String: '%s' -> Integer: %d\n", str4, ft_atoi(str4));
    return 0;
}
/*Krok 4: Konwersja cyfr
while (str[i] >= '0' && str[i] <= '9')
{
    result = result * 10 + (str[i] - '0');
    i++;
}
Teraz zaczynamy przetwarzanie cyfr w pętli while. Działa ona do momentu, gdy napotkane znaki są cyframi 
(czyli od '0' do '9').

Pierwsza iteracja:
str[i] wskazuje na '1', więc:
result = result * 10 + (str[i] - '0') = 0 * 10 + (49 - 48) = 1
Następnie zwiększamy i o 1, aby przejść do następnego znaku '2'.

Druga iteracja:
str[i] wskazuje na '2', więc:
result = result * 10 + (str[i] - '0') = 1 * 10 + (50 - 48) = 12
Przesuwamy i do przodu, teraz mamy znak '3'.

Trzecia iteracja:
str[i] to '3', więc:
result = result * 10 + (str[i] - '0') = 12 * 10 + (51 - 48) = 123
Zwiększamy i i teraz str[i] wskazuje na 'a'.
Krok 5: Koniec pętli
Kiedy i wskazuje na 'a', pętla się kończy, ponieważ 'a' nie jest cyfrą. Nasz result zawiera teraz wartość 123.*/