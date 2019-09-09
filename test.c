#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(void)
{
	char s1[] = "Hello";
	char s2[] = ",world!";
	char *result = NULL;
	// printf("first string is = %s\n", s1);
	// printf("second string is = %s\n", s2);
	// printf("%d\n", strcmp("hello\200", "hello\0"));
	// printf("%d", ft_strcmp("hello\200", "hello\0"));

	//result = ft_strncat(s1, s2, 8);
	//printf("%s\n", result);
	result = (char*)ft_memmove(s1, s2, 5);
	printf("%s\n", result);
	
	return (0);
}
