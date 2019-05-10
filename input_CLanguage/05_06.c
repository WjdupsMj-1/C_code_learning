#include<stdio.h>

int main(void)
{
	int inter;	
	int i; 
	
	while(1){
	int sum = 0;
	printf("please enter a number to addemup:(<= 0 to quit)\n");
	scanf("%d", &inter);
	if(inter < 1)
	break;
	for (i = 0; i < inter; i++)
		sum += (i + 1) * (i + 1);
	printf("sum up is %d\n", sum);
	}

	return 0;
}
