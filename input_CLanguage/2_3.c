#include <stdio.h>
#define YEAR 27
#define DAYS 365
int main(void)
{
	int year = YEAR;
	int days = 0;
	printf("You are %d years old!\n",YEAR);
	days = year * DAYS;
	printf("which means you have lived %d days.\n", days);
	return 0;
}
