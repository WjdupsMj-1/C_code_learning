#include<stdio.h>
#include"12_03.h"
//static int mode;
//static double distance;
//static double fuel;

int main()
{
	int mode;
	printf("Enter 0 for meric mode, i for US mode: ");
	scanf("%d", &mode);
	while(mode >= 0){
		mode = set_mode(mode);
		get_info(mode);
		printf("Enter 0 for metric mode, 1 for US mode");
		printf("(-1 to quit): ");
		scanf("%d", &mode);
	}
	printf("Done.\n");

	return 0;
}

int set_mode(int mode)
{
	while(mode != 1 && mode != 0 && mode != -1){
		printf("Invalid mode specified. Mode 1(US) is used.\n");
		mode = 1;
	}
	return mode;
}

void get_info(int mode)
{
	double distance, fuel;	
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
	show_info(distance, fuel, mode);
	return;
}

void show_info(double distance, double fuel, int mode)
{
	if(mode == 0)
		printf("Fuel consumption is %4.2f litters per 100 km.\n",
		(fuel / distance) * 100);
	else	
		printf("Fuel consumption is %3.1f miles per gallon.\n",
		distance / fuel);
	return;
}
