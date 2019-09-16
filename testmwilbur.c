#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <fcntl.h>
#include <stdlib.h>
#include "libft.h"

int		main(void)
{
	// char *first = "Hello, world!";
	// char *second = "My name is Dmitrii :)";
	// printf("first = %s\n", first);
	// printf("second = %s\n", second);
	// printf("ft_strequ: %d\n", ft_strequ(first, second));
	// printf("ft_strNequ: %d\n", ft_strnequ(first, second, 8));

	// char *result = ft_strjoin(first, second);
	// printf("result = %s\n", result);

	// printf("0 = %s\n", ft_itoa(0));
	// printf("123 = %s\n", ft_itoa(123));
	// printf("-50 = %s\n", ft_itoa(-50));
	// printf("1 = %s\n", ft_itoa(1));
	// printf("-1 = %s\n", ft_itoa(-1));
	// printf("%d(int_max) = %s\n", INT_MAX, ft_itoa(INT_MAX));
	// printf("%d(int_min) = %s\n", INT_MIN, ft_itoa(INT_MIN));

	// ft_putnbr(0);
	// ft_putchar('\n');
	// ft_putnbr(-142);
	// ft_putchar('\n');
	// ft_putnbr(INT_MAX);
	// ft_putchar('\n');
	// ft_putnbr(INT_MIN);
	// ft_putchar('\n');
	// ft_putnbr(1);
	// ft_putchar('\n');

	// int file;
	// char *str = "Hello, world!";
	// char *str2 = " adasdasdasd adas dasd";
	// char *str3 = "";
	// file = open("filetest.txt", O_RDWR | O_CREAT);
	// ft_putstr_fd(str, file);
	// ft_putchar_fd('\n', file);
	// ft_putstr_fd(str3, file);
	// ft_putchar_fd('\n', file);
	// ft_putstr_fd(str2, file);
	// ft_putendl_fd(str, file);
	// ft_putchar_fd('!', file);
	// ft_putnbr_fd(0, file);
	// ft_putchar_fd('\n', file);
	// ft_putnbr_fd(-142, file);
	// ft_putchar_fd('\n', file);
	// ft_putnbr_fd(INT_MAX, file);
	// ft_putchar_fd('\n', file);
	// ft_putnbr_fd(INT_MIN, file);
	// ft_putchar_fd('\n', file);
	// ft_putnbr_fd(1, file);
	// ft_putchar_fd('\n', file);

	// char *content = "Hello world!";
	// int content_size = 1;
	// t_list *result;
	// result  = ft_lstnew(content, content_size);

	// char *str = " 	   	 Hello, world!			     ";
	// printf("source string = %s\n", str);
	// char *result = ft_strtrim(str);
	// printf("destination string = %s\n", result);

	// char *first = "Hello";
	// char *second = "Hello";
	// size_t size = 5;
	// printf("myfunc = %d\n", ft_memcmp(first, second, size));
	// printf("libfunc = %d\n", memcmp(first, second, size));;

	// char first[] = "there is no stars in the sky";
	// char *second = "the cake is a lie !\0I'm hidden lol\r\n";
	// char first1[] = "there is no stars in the sky";
	// char *second2 = "the cake is a lie !\0I'm hidden lol\r\n";
	// size_t size = 0;
	// // long my = ft_strlcat(first, second, size);
	// long lb = strlcat(first1, second2, size);
	// printf("result = %lu", lb);

	char n[40] = "99999999999999999999999999";
	printf("My function = %d\nLib function = %d\n", ft_atoi(n), atoi(n));

	return (0);
}
