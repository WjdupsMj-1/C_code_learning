#include<stdio.h>
#include<string.h>
#define SIZE 8

int main(void)
{
	int class[64] = {};
	int i;

	printf("Enter 8 int number into the class:\n");
	for(i = 0; i < SIZE; i++)
	scanf("%d",&class[i]);
	
	for(i = 1; i <= SIZE; i++)
		printf("%d ", class[SIZE - i]);

	return 0;
}
