#include<stdio.h>

int main(void)
{
	int index[8] = {};
	int i, n;
	int indet[8] = {};
	printf("Enter the elements for index:\n");
	for(i = 0; i < 8; i++)
		scanf("%d", &index[i]);
	for(i = 0; i < 8; i++){
		indet[i] = 1;
		for(n = 0; n < index[i]; n++)
			indet[i] *= 2;
	}
	
	i = 0;
	do{
	printf("2's index %d is %d\n", index[i], indet[i]);
	i++;
	}while(i < 8);
	return 0;
}
