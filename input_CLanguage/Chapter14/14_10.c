#include<stdio.h>
#include<stdlib.h>
int func1(int num);
int func2(int num);
int func3(int num);
int func4(int num);

int main(void)
{
	int ab;
	int (*p[4])(int num);
	printf("Enter a number:");
	scanf("%d", &ab);
	p[0] = func1;
	p[1] = func2;
	p[2] = func3;
	p[3] = func4;
	for(int i = 0; i < 4; i++)
		p[i](ab);

	return 0;
}

int func1(int num)
{
	printf("%d * 1 = %d.\n", num, num * 1);
	return 0;
}
int func2(int num)
{
	printf("%d * 2 = %d.\n", num, num * 2);
	return 0;
}
int func3(int num)
{
	printf("%d * 3 = %d.\n", num, num * 3);
	return 0;
}
int func4(int num)
{
	printf("%d * 4 = %d.\n", num, num * 4);
	return 0;
}
