#include<stdio.h>
#define MAX 40
char * itobs(int n, char * ps);
int main(void)
{
	int num;
	int count_1 = 0;
	char bin_str[MAX];
	int i = 0;
	puts("Enter a number.");
	scanf("%d", &num);
	itobs(num, bin_str);
	while(bin_str[i] != '\0')
	{
		if(bin_str[i] == '1')
		  count_1++;
		i++;
	}
	printf("there are %d bits open for %d.\n", count_1, num);
	printf("%s is for %d\n", bin_str, num);
	return 0;

}

char * itobs(int n, char * ps)
{
	int i;
	static int size = 8 * sizeof(int);

	for(i = size - 1; i >= 0; i--, n >>= 1)
	  ps[i] = (01 & n) + '0';
	ps[size] = '\0';

	return ps;
}
