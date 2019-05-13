#include<stdio.h>

int main(void)
{
	int ch;
	int n = 0;	
	while((ch = getchar()) != EOF){
		putchar(ch);
		n++;
	}
	printf("there are %d enters there.\n", n);
	return 0;
}
