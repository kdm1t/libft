#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int		main(void)
{
	int test = 65;
	while (test < 91)
	{
		printf("src = %c, result = %c\n", test, tolower(test));
		//printf("isalnum : %d = %d;	", test, isalnum(test));
		//printf("%d = %d\n",test, ft_isalnum(test));
		test++;
	}
	return (0);	
}