#include<stdio.h>
#define GALLEN 3.785
#define MILE 1.609

int main(void)
{
	float miles, gals;
	float km, ls;
	float gals_p_mile, ls_p_km;
	float cost_g, cost_l;

	printf("please enter the miles you discover:\n");
	scanf("%f", &miles);
	printf("please enter the gallen you used:\n");
	scanf("%f", &gals);
	
	cost_g = (gals / miles) * 100;
	km = miles * MILE;
	ls = gals * GALLEN;
	cost_l = (ls / km) * 100;

	printf("you will cost %.1f gallens oil for 100 miles\n"
	"which means you will cost %.1f L oil for 100 km.\n", cost_g, cost_l);

	return 0;
}
