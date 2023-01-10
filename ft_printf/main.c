#include<stdio.h>
#include "ft_printf.h"//다른 함수 불러오기위해선 헤더 필욯함.
#include<stdlib.h>

int main()
{
	// char	a[13] = "%x";
	// char	*vc;
	// vc = (char*)malloc(5);
	// vc = "abcs";
	// unsigned int c = 16666;
	// int af;

	// af = 0;
	printf("1 %u\n ", INT_MAX);
	printf("2 %u\n ", INT_MIN);
	printf("3 %u\n ", LONG_MAX);
	printf("4 %u\n ", LONG_MIN);//
	printf("5 %u\n ", UINT_MAX);
	printf("6 %u\n ", ULONG_MAX);
	printf("7 %u\n ", 9223372036854775807LL);
	printf("8 %u %u %u %u %u %u %u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	puts("\n");
	ft_printf("1 %u\n ", INT_MAX);
	ft_printf("2 %u\n ", INT_MIN);
	ft_printf("3 %u\n ", LONG_MAX);
	ft_printf("4 %u\n ", LONG_MIN);
	ft_printf("5 %u\n ", UINT_MAX);
	ft_printf("6 %u\n ", ULONG_MAX);
	ft_printf("7 %u\n ", 9223372036854775807LL);
	ft_printf("8 %u %u %u %u %u %u %u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

// 	ft_printf("ul: %u\n",LONG_MIN);
// 	printf("ul: %u\n",LONG_MIN);
// 	ft_printf("c: %c\n",'d');
// 	printf("c: %c\n",'d');
// 	ft_printf("vc:%p\n",&vc);
// 	printf("vc:%p\n",&vc);
// 	ft_printf(a,c);
// 	puts("\n");
// 	printf(a,c);
// 	puts("\n");
// 	ft_printf("ㅇㅇ%d\n",ft_printf(a,c));
// 	printf("ㅇㅇ%d\n",printf(a,c));

// 	printf("c: %d%1234\n",1);
// 	ft_printf("c: %d%1234\n",1);
// 	ft_printf("str: %s\n", vc);
// 	printf("str: %s\n", vc);
// 	vc = NULL;
// 	free(vc);
	return (0);
}