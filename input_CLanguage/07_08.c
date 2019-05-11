#include<stdio.h>
#define OVER 40
#define TAX_300 0.15
#define TAX_450 0.20
#define TAX_OVER 0.25
float salary(int, float);
float TAXI(float, float);

int main(void)
{
	int hours = 0;
	float sal;
	float tax;
	float sal_tax;
	int i = 0;
	char ch;
	float BASIC = 0;

	while(1){	
	for (i = 0; i < 60; i++)
		printf("*");
	printf("\nEnter the number corresponding to the desire pay rate or action:\n");
	printf("1)$8.75/hr      2)$9.33/hr\n"
		   "3)$10.00/hr     4)$11.20/hr\n"
		   "5)quit\n");
	for (i = 0; i < 60; i++)
		printf("*");
	printf("\n");
	scanf("%c", &ch);
	if (ch > '0' && ch < '6')
		break;
	else
		printf("Enter 1~5!\n");
	}
	while(1){
		switch(ch){
			case'1': BASIC = 8.75;
					break;
			case'2': BASIC = 9.33;
					break;
			case'3': BASIC = 10.00;
					break;
			case'4': BASIC = 11.20;
					break;
			case'q':
			case'5':break;
		}
		if(ch == 'q' || ch == '5')
			goto end;
	printf("Enter Hours:\n");
	scanf("%d", &hours);
	sal = salary(hours, BASIC);
	tax = TAXI(sal, BASIC);
	sal_tax = sal - tax;
	
	printf("Salary is: $%.2f\n", sal);
	printf("Tax is: $%.2f\n", tax);
	printf("Salary after tax is: $%.2f\n", sal_tax);
	for (i = 0; i < 60; i++)
		printf("*");
	printf("\nEnter the number corresponding to the desire pay rate or action:\n");
	printf("1)$8.75/hr      2)$9.33/hr\n"
		   "3)$10.00/hr     4)$11.20/hr\n"
		   "5)quit\n");
	for (i = 0; i < 60; i++)
		printf("*");
	printf("\n");
	}

end:return 0;
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
