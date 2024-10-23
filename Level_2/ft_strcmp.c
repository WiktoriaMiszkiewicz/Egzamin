/*Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------
Reproduce the behavior of the function strcmp (man strcmp).
Your function must be declared as follows:
int    ft_strcmp(char *s1, char *s2);*/
int    ft_strcmp(char *s1, char *s2)
{
  while (*s1 && (*s1 == *s2))
  {
    s1++;
    s2++;
  }
  return (*s1 - *s2);
}
// ważne ! Inkrementacja powinna być na wskaźnikach (bez użycia * przed nimi),
//aby przesuwać się po ciągu znaków, a nie na wartościach znaków.