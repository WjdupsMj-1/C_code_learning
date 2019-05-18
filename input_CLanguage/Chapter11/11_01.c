#include<stdio.h>
#include<string.h>

int main(void)
{
	int n = 3, i, j;
	char ch[n]; 
	printf("Enter the length.\n");
	scanf("%d", &n);
	while(getchar()!='\n');
	printf("enter the string:\n");
	for(i = 0, j = 0; i < n; i++, j++)
		ch[i] = getchar();
	printf("there are %d elements there.\n", j);
	for(i = 0; i < n; i++)
		putchar(ch[i]);
	printf("\n");	
	return 0;
}
