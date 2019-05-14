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
	for(i = 0, j = 0; i < n; i++, j++){
		ch[i] = getchar();
		if(ch[i] == 32 || ch[i] == 10 || ch[i] == 9)
			break;
	}
	printf("there are %d elements there.\n", j);
	for(i = 0; i < j; i++)
		putchar(ch[i]);
	printf("\n");	
	return 0;
}
