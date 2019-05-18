#include<stdio.h>

int critic(int);
int main(void)
{
	int units = 0;
	
	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);
	while(units != 56)
		units = critic(units);
	printf("You muct have looked it up!\n");
	return 0;
}
int critic(int num)
{
	printf("No luck, chummy, Try again.\n");
	scanf("%d", &num);

	return num;
}
