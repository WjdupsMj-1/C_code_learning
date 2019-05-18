#include <stdio.h>
int max(int a, int b);
int main(void)
{
	int a = 0;
	int b = 0;
	int m = 0;
	printf("please enter two number into the box:\n");
	scanf("%d%d",&a,&b);
	m = max(a, b);
	printf("\n the max in the box is %d\n", m);
	return 0;
}

int max(int a, int b)
{
	int max = 0;
	if(a > b)
	max = a;
	else 
	max = b;
	return max;
}
