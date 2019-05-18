#include<stdio.h>
#define BASIC 10.00
#define OVER 40
#define TAX_300 0.15
#define TAX_450 0.20
#define TAX_OVER 0.25
float salary(int);
float TAXI(float);

int main(void)
{
	int hours = 0;
	float sal;
	float tax;
	float sal_tax;

	printf("Enter Hours:\n");
	scanf("%d", &hours);
	sal = salary(hours);
	tax = TAXI(sal);
	sal_tax = sal - tax;
	
	printf("Salary is: $%.2f\n", sal);
	printf("Tax is: $%.2f\n", tax);
	printf("Salary after tax is: $%.2f\n", sal_tax);

	return 0;
}

float salary(int hours)
{
	float salary;
	if(hours < OVER)
		salary = hours * BASIC;
	else 
		salary = OVER * BASIC + (hours - OVER) * BASIC * 1.5;

	return salary;
}

float TAXI(float salary)
{
	float tax;
	if(salary < 300)
		tax = salary * TAX_300;
	else if(salary < 450)
		tax = 300 * TAX_300 + (salary - 300) * TAX_450;
	else 
		tax = 300 * TAX_300 + 150 * TAX_450 + (salary - 450) * TAX_OVER;

	return tax;
}
