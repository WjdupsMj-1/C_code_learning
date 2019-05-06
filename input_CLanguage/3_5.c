#include <stdio.h>
#define SECONDS 31560000
int main(void)
{
	int years;
	int sec;
	printf("please enter your years old: \n");
	scanf("%d",&years);
	sec = years * SECONDS;
	printf("it's echos %e seconeds.\n", (double)sec);
	return 0;

}
