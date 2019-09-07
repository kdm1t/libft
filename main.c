#include "libft.h"
#include <stdio.h>

int		main(void)
{
	int i;
	char str[] = "Hello";
	char s2[] = "World";
	char s3[] = ".";
	char s4[] = "I'm Dmitrii";

	i = 0;
	while (str[i])
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	i = 0;
	strcat(str, s2);
	while (str[i])
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	i = 0;
	strcat(str, s3);

	while (str[i])
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	i = 0;
	strcat(str, s4);
	while (str[i])
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	return (0);
}