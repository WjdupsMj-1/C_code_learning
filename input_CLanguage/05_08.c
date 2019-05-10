#include<stdio.h>
#define KELVIN 273.16
void temperatures(const double in);

int main(void)
{
	double Fah;
	char ch = 0;
	
	while(1){
	printf("please enter a Fahrenheit temperature:\n");
	scanf("%lf", &Fah);
	temperatures(Fah);
	printf("(q to quit):\n");
	scanf("%c", &ch);
	if((ch == 'q') || (ch == 'Q'))
	break;
	else
	continue;
	}
	printf("bye!\n");
	return 0;
}

void temperatures(const double in)
{
	float cel = 0;
	float fah = 0;
	float kel = 0;

	fah = in;
	cel = 1.8 * fah + 32.0;
	kel = cel + KELVIN;
	
	printf("the Fah = %.2f.\n"
		"the Cel = %.2f.\n"
		"the Kel = %.2f.\n", fah, cel, kel);
	return;
}
