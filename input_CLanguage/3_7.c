#include<stdio.h>
#define INCH 2.54

int main(void)
{
	float hight;
	float inches;
	printf("please enter your hight in cm:\n");
	scanf("%f",&hight);
	inches = hight / INCH;
	printf("which means your hight is: %f inches.\n", inches);
	return 0;
}
