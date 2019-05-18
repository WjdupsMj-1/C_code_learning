#include<stdio.h>
#define METERS 100

int main(void)
{
	float cm, m;
	char name[64] = {};
	printf("please enter your name:\n");
	scanf("%s", name);
	printf("please enter your height in cm:\n");
	scanf("%f", &cm);
	m = cm / METERS;
	printf("%s, you are %5.4f meter tall!\n",name, m);
	
	return 0;
}
