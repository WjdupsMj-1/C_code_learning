#include<stdio.h>
#define MAX 40
char *itobs(int n, char *ps);

int main(void)
{
	int num;
	int bit;
	char bin_str[MAX];

	puts("Enter a number.");
	scanf("%d", &num);
	puts("Enter a bit location.");
	scanf("%d", &bit);
	itobs(num, bin_str);
	printf("%d is:\n", num);
	int i = 0;
	while(bin_str[i])
	{
		putchar(bin_str[i]);
		if(++i % 4 == 0 && bin_str[i])
		  putchar(' ');
	}
	if(bin_str[32 - bit] == '1')
	  printf("Result is 1\n");
	else 
	  printf("Result is 0\n");

	return 0;
}

char *itobs(int n, char *ps)
{
	int i;
	static int size = 8 * sizeof(int);

	for(i = size - 1; i >= 0; i--, n >>= 1)
	  ps[i] = (01 & n) + '0';
	ps[size] = '\0';

	return ps;

}
