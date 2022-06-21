#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int main(void)
{
//	char s1[] = "aba%cate%s";
//	char s2[] = "MORRA";
//	int i = 49;
//	//while (--i)
//	//	printf("%c", *s++);
//	//printf("%s\n", ft_strchr(s, '%'));
//	ft_printf(s1, i, s2);

//	char *p = "abcd";
//	int d = 010;
//	int o = 010;
//	int h = 0xFFF;

	printf(">>> INPUT TESTS <<<\n");
	ft_printf("FT: %x\n", LONG_MAX);
	printf("RO: %lx\n", LONG_MAX); 
	
	//TESTS FOR %d
	//printf("\nTESTS FOR %%d\n");
	//printf("input: 10 (decimal)\n");
	//printf("output: %d\n\n", d);
	//printf("input: 010 (octal)\n");
	//printf("output: %d\n\n", o);
	//printf("input: 0x10 (hexadecimal)\n");
	//printf("output: %d\n\n", h);

	//TESTS FOR %i
	//printf("\nTESTS FOR %%i\n");
	//printf("input: 10 (decimal)\n");
	//printf("output: %i\n\n", d);
	//printf("input: 010 (octal)\n");
	//printf("output: %i\n\n", o);
	//printf("input: 0x10 (hexadecimal)\n");
	//printf("output: %i\n\n", h);

	//TESTS FOR %x
	//printf("\nTESTS FOR %%x\n");
	//printf("input: 10 (decimal)\n");      		
	//printf("output: %x\n\n", d);
	//printf("input: 010 (octal)\n");
	//printf("output: %x\n\n", o);
	//printf("input: 0x10 (hexadecimal)\n");
	//printf("output: %x\n\n", h);

	return (0);

}
