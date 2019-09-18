#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>
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

	// char n[40] = "99999999999999999999999999";
	// printf("My function = %d\nLib function = %d\n", ft_atoi(n), atoi(n));

	// char *data = "Hello, I'm a data";
	// t_list *l = ft_lstnew(data, strlen(data) + 1);
	// if (!ft_strcmp(data, l->content))
	// {
	// 	free(l->content);
	// 	free(l);
	// 	printf("test success\n");
	// }
	// else
	// 	printf("shit\n");

	// char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	// char *s2 = "Hello \t  Please\n Trim me !";
	// char *ret = ft_strtrim(s1);
	// if (!ft_strcmp(ret, s2))
	// {
	// 	printf("Test success\n");
	// 	printf("first = %s\n", ret);
	// 	printf("second = %s\n", s2);
	// }
	// else
	// {
	// 	printf("first = %s\n", ret);
	// 	printf("second = %s\n", s2);
	// 	printf("test failed\n");
	// }

	// char *str = "Hello world!";
	// char delimiter = 0;
	// // char **result = ft_strsplit(str, delimiter);
	// // int i = 0;
	// printf("string = %s; delimiter = %c\n", str, delimiter);
	// // while (result[i])
	// // {
	// // 	printf("%d. string = %s\n", i, result[i]);
	// // 	i++;
	// // }
	// printf("count = %d\n", ft_wordscounter(str, delimiter));

	// char *str = "                               \n";
	// char delimiter = ' ';
	// printf("STRING = %s\nDELIMITER = %c\nFT_WORDSCOUNTER = %d", str, delimiter, ft_wordscounter(str, delimiter));

	// printf("max size of size_t = %llu\n", SIZE_MAX);
	// printf("ft_atoi = %d\n", ft_atoi("184467440737095516151221"));
	// printf("atoi = %d\n", atoi("184467440737095516151221"));


	// int counter;
	// char *s = "***********Hello***wrodl**";
	// char c = '*';
	// counter = 0;
	// printf("old str = %s\n", s);
	// while (*s == c)
	// 	s++;
	// while (*s && *s != c)
	// {
	// 	s++;
	// 	counter++;
	// }
	// printf("new str = %s\ncharacters = %d\n", s, counter);


	return (0);
}
