#include<stdio.h>
#define SORT1 17850;
#define SORT2 23900;
#define SORT3 29750;
#define SORT4 14875;
#define TAX_RATE1 0.15;
#define TAX_RATE2 0.28;

int MANU(void);
double SALARY(void);
double TAX(double,int);

int main(void)
{
	double salary;
	double tax;
	int sort;
	char ch;

	do{
		sort = MANU();
		if(sort == 0)
			return 0;
		salary = SALARY();
		tax = TAX(salary, sort);
		printf("The tax should be: %5.2f\n", tax);
		printf("Enter next sort or q to quit.\n");
	}while(getchar() != 'q');
	return 0;
}

int MANU(void)
{
	int i;
	int sort;
	for(i = 0; i < 70; i++)
		printf("*");
	printf("\n%-40s%-40s","种类","税金");
	printf("\n%-40s%-40s","1,单身","前17,850按15%，超出部分按28%");
	printf("\n%-40s%-40s","2,户主","前23,900按15%，超出部分按28%");
	printf("\n%-40s%-40s","3,已婚共有","  前29,750按15%，超出部分按28%");
	printf("\n%-40s%-40s\n","4,已婚离异","  前14,875按15%，超出部分按28%");
	for(i = 0; i < 70; i++)
		printf("*");
	printf("\n");
	do{
	sort = 0;
	printf("Enter your sort(q to quit):\n");
	if(scanf("%d",&sort) == 1 && sort < 5 && sort > 0)
	break;
	}while(getchar() != 'q');

	return sort;
}

double SALARY(void)
{
	double salary;

	do{
	printf("Enter your salary(q to quit):\n");
	if(scanf("%lf", &salary) == 1)
		break;
	}while(getchar() != 'q');
	
	return salary;
}

double TAX(double salary, int sort)
{
	double tax = 0;
	double sor = 0;
	switch(sort){
	case 1:sor = SORT1;
			break;
	case 2:sor = SORT2;
			break;
	case 3:sor = SORT3;
			break;
	case 4:sor = SORT4;
			break;
	}
	tax = salary * 0.15;
	if(sor < salary)
		tax = (salary - sor) * 0.28 + sor * 0.15;
	
	return tax;
}
