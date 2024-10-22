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
	int		len;
	char	tmp;

	len = 0;

	while (str[len])
	{
			len++;
	}

	i = 0;
	
	while (i < --len)
	{
		// Zamieniamy miejscami znaki
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;  // Przesuwamy indeks i do przodu
	}
	return (str);
}
