/*Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:*/

#include <stdlib.h>
char	*ft_strpbrk(const char *s1, const char *s2)
{
  int i;
  if (!s1 || !s2)
    return (0);

  while (*s1)
  {
    i = 0;
    while(s2[i])
    {
      if(*s1 == s2[i])
      {
        return (char *)s1;// zwracamy wskaźnik do pierwszego pasującego znaku
      }
      i++;
    }
    s1++;// przechodzimy do kolejnego znaku w s1
  }
  return (NULL);

}
//Przeszukuje ciąg znaków w poszukiwaniu pierwszego wsytąpienia dwolonego znaku z innego ciągu.
// zwraca wskaznik NULL jak nie znajdzie a jak tak to wskaznik do pierwszego znaku w ciagu s1.
#include <stdio.h>

int main(void)
{
    char s1[] = "hello world";
    char s2[] = " ";

    char *result = ft_strpbrk(s1, s2);
    if (result)
        printf("First match found at: %s\n", result);
    else
        printf("No match found.\n");

    return 0;
}