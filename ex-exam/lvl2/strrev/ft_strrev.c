#include <stdio.h>
char *ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char aux;

	while(str[i])
	{
		i++;
	}

	i--;
	while(j < i)
	{
		aux = str[i];
		str[i] = str[j];
		str[j] = aux;
		j++;
		i--;
	}

	return (str);
}

int main()
{
	char str[] = "hola";
	printf("%s", ft_strrev(str));
		return(0);;

}
