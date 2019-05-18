#include<stdio.h>
#define PRO 1.08
#define DEF 10
#define INV 100
double remain(int);

int main(void)
{
	double rem;
	int year;
	int i = 0;
	do{
	i++;
	rem = remain(i);
	}while(rem > 0);
	
	printf("Enter the year:\n");
	scanf("%d", &year);
	printf("year %d, the remain is: %.4f\n", year, remain(year));
	printf("at year %d the remain would be cleared!\n", i);
	
	return 0;
}

double remain(int i)
{
	double remain = INV;
	int n;

	for(n = 0; n < i; n++)
		remain = remain * PRO - DEF;
	return remain;
}
