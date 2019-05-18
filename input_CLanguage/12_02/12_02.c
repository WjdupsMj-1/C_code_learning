#include<stdio.h>
#include"12_02.h"
static int mode;
static double distance;
static double fuel;

int main()
{
	printf("Enter 0 for meric mode, i for US mode: ");
	scanf("%d", &mode);
	while(mode >= 0){
		set_mode();
		get_info();
		show_info();
		printf("Enter 0 for metric mode, 1 for US mode");
		printf("(-1 to quit): ");
		scanf("%d", &mode);
	}
	printf("Done.\n");

	return 0;
}

void set_mode(void)
{
	extern int mode;
	while(mode != 1 && mode != 0 && mode != -1){
		printf("Invalid mode specified. Mode 1(US) is used.\n");
		mode = 1;
	}
	return;
}

void get_info(void)
{
	if(mode == 0){
		printf("Enter distance tarveled in kilometers: ");
		scanf("%lf", &distance);
		printf("Enter fuel consumed in liters: ");
		scanf("%lf", &fuel);
	}
	else{
		printf("Enter distance tarveled in miles: ");
		scanf("%lf", &distance);
		printf("Enter fuel consumed in gallon: ");
		scanf("%lf", &fuel);
	}

	return;
}

void show_info(void)
{
	if(mode == 0)
		printf("Fuel consumption is %4.2f litters per 100 km.\n",
		(fuel / distance) * 100);
	else	
		printf("Fuel consumption is %3.1f miles per gallon.\n",
		distance / fuel);
	return;
}
