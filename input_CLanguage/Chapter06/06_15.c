#include<stdio.h>
#define P_Da 0.10
#define P_De 0.05
#define INVEST 100
double Daphne(int years);
double Deirdre(int years);
int Com(void);

int main(void)
{
	double da, de;
	int years;
	int year, i;

	printf("Enter the year:\n");
	scanf("%d", &years);

	da = Daphne(years);
	de = Deirdre(years);
	year = Com();
	printf("%d\n",Com());
	printf("Year %d:\nDe = %.3f\nDa = %.3f\n", years, de, da);
	printf("Da may > De at %d year\n", year);
	printf("That time Da = %.3f and De = %.3f\n", Daphne(year), Deirdre(year));

	return 0;
}

double Daphne(int years)
{
	double profit = INVEST * P_Da;
		profit = years * profit;
	return profit; 
}

double Deirdre(int years)
{
	int i;
	double profit = 0;
		for (i = 0; i < years; i++)
			profit += ((profit + INVEST) * P_De);
	return profit;
}

int Com(void)
{
	int i = 0;
	double Da, De, D;
/*	for(i = 1; D > 0; i++){
	Da = Daphne(i);
	De = Deirdre(i);
	D = Da - De;
	}*/
	while(1){
	i++;
	Da = Daphne(i);
	De = Deirdre(i);
	if (Da < De)
	break;
	}
	return i;

}
