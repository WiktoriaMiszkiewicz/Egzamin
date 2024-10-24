/*Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: 
--------------------------------------------------------------------------------
Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);*/

#include <stdio.h>
 char *ft_strcpy(char *dest, char *src)
{
  int i;
  i = 0;
  while(src[i])
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return (dest);
}

int main()
{
  char s1[100] = "";
  char s2[] = "Wiktoria ";
  ft_strcpy(s1,s2); 
  printf("%s",s1);
}
 /*LUB
char	*ft_strcpy(char *s1, const char *s2)
{
	char *start = s1;
	while ((*s1++ = *s2++));
	return (start);
}
 */