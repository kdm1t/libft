#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(void)
{
	char *s1 = "Hellooooo world";
	//char *s2 = "Hello world";
	char c = 'd';

	//for ft_strncmp.c
	// printf("my = %d\n", ft_strncmp(s1, s2, 30));
	// printf("lib = %d\n", strncmp(s1, s2, 30));
	// printf("my = %d\n", ft_strncmp(s1, s2, 3));
	// printf("lib = %d\n", strncmp(s1, s2, 3));
	// printf("my = %d\n", ft_strncmp(s1, s2, 0));
	// printf("lib = %d\n", strncmp(s1, s2, 0));

	//for ft_strcmp.c
	// printf("my = %d\n", ft_strcmp(s1, s2));
	// printf("lib = %d\n", strcmp(s1, s2));
	// printf("my = %d\n", ft_strcmp("Hello", "Goodbye"));
	// printf("lib = %d\n", strcmp("Hello", "Goodbye"));
	// printf("my = %d\n", ft_strcmp("hello", "hell"));
	// printf("lib = %d\n", strcmp("hello", "hell"));
	// printf("my = %d\n", ft_strcmp("", "asdasd"));
	// printf("lib = %d\n", strcmp("", "asdasd"));
	// printf("my = %d\n", ft_strcmp("   ", "   "));
	// printf("lib = %d\n", strcmp("   ", "   "));

	//for ft_stchr.c && ft_strrchr.c
	printf("FT_STRCHR && FT_STRRCHR:\n");
	printf("my = %s\n", ft_strchr(s1, c));
	printf("lib = %s\n", strchr(s1, c));
	printf("my = %s\n", ft_strrchr(s1, 'a'));
	printf("lib = %s\n", strrchr(s1, 'a'));
	printf("lib = %s\n", strrchr(s1, 'o'));
	printf("lib = %s\n", strrchr(s1, 'o'));
	

	return (0);
}