#include<stdio.h>
#define OVER 40
#define TAX_300 0.15
#define TAX_450 0.20
#define TAX_OVER 0.25
float salary(int, float);
float TAXI(float, float);
float BASI(void);
void BLOCK(void);

int main(void)
{
	int hours = 0;
	float sal;
	float tax;
	float sal_tax;
	float BASIC;
	int i;

	while(1){
		BLOCK();
		BASIC = 0;
		BASIC = BASI();
		if (BASIC == 1)
			break;
		printf("Enter Hours:\n");
		scanf("%d", &hours);
		sal = salary(hours, BASIC);
		tax = TAXI(sal, BASIC);
		sal_tax = sal - tax;
	
		printf("Salary is: $%.2f\n", sal);
		printf("Tax is: $%.2f\n", tax);
		printf("Salary after tax is: $%.2f\n", sal_tax);
		while(getchar() != '\n')
		continue;
	}
	printf("Bye!\n");
	return 0;
}

float salary(int hours, float BASIC)
{
	float salary;
	if(hours < OVER)
		salary = hours * BASIC;
	else 
		salary = OVER * BASIC + (hours - OVER) * BASIC * 1.5;

	return salary;
}

float TAXI(float salary, float BASIC)
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

float BASI(void)
{
	char ch = 0;
	float BASI = 0;
	
	while(1){
	ch = getchar();
	while(getchar() != '\n')
	continue;
		if(ch >= 'a' && ch < 'f'){
			switch(ch){
			case'a': BASI = 8.75;
					break;
			case'b': BASI = 9.33;
					break;
			case'c': BASI = 10.00;
					break;
			case'd': BASI = 11.20;
					break;
			case'e': BASI = 1;
					break;
			case'f': BASI = 2;
					break;
			}
		break;
		}
	else
		printf("Enter a ~ e\n");
	}
	return BASI;
}

void BLOCK(void)
{
	int i;
	for (i = 0; i < 60; i++)
		printf("*");
	printf("\nEnter the number corresponding to the desire pay rate or action:\n");
	printf("a)$8.75/hr      b)$9.33/hr\n"
		   "c)$10.00/hr     d)$11.20/hr\n"
		   "e)quit          f)manu\n");
	for (i = 0; i < 60; i++)
		printf("*");
	printf("\nEnter Choice:\n");
}
