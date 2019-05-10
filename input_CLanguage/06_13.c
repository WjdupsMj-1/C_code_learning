#include<stdio.h>

int main(void)
{
	double index[8] = {};
	int i, n;
	double indet[8] = {};
	printf("Enter the elements for index:\n");
	for(i = 0; i < 8; i++)
		scanf("%lf", &index[i]);
	for(i = 0; i < 8; i++){
		indet[i] = 1;
		for(n = 0; n <= i; n++)
			indet[i] += index[i];
	}
	
	i = 0;
	printf("Class is:\n");
	do{
	printf("%6.2f", index[i]);
	i++;
	}while(i < 8);
	printf("\n");
	for(i = 0; i < 8; i++)
	printf("%6.2f", indet[i]);
	printf("\n");
	return 0;
}
