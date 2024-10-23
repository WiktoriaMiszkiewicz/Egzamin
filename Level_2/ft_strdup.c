/*Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------
Reproduce the behavior of the function strdup (man strdup).
Your function must be declared as follows:
char    *ft_strdup(char *src);
--------------------------------------------------------------------------------
#include<stdio.h>
#include<string.h>
int main()
{
    char source[] = "GeeksForGeeks";
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = strdup(source);
    printf("%s", target);
    return 0;
}*/

#include <stdlib.h>
char	*ft_strdup(char *src)
{
	int		i;
	int		length = 0;
	char	*strcpy;

	while (src[length])
		length++;

	strcpy = malloc(length + 1);
	
	if (strcpy != NULL)
	{
		i = 0;
		while (src[i])
		{
			strcpy[i] = src[i];
			i++;
		}
		strcpy[i] = '\0';
	}
	return (strcpy);
}