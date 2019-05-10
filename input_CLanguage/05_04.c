#include<stdio.h>
#define CM_PER_INCH 2.54
#define INCH_TO_FEET 12

int main(void)
{
	float cm = 1;
	int feet;
	float inch, inchs;
	do{
	printf("please enter a height in cm:(<= 0 to quit)\n");
	scanf("%f", &cm);
	if (cm <= 0)
	break;
	inchs = cm / CM_PER_INCH;
	feet = inchs / INCH_TO_FEET;
	inch = inchs - (INCH_TO_FEET * feet);
	printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inch);
	}while (cm > 0);
	printf("bye!\n");
	
	return 0;
}
