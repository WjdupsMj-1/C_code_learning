#include<stdio.h>

int main(void)
{
	char alphas[26] = {};
	int i, j;
	
	for (i = 0; i < 26; i++)
		alphas[i] = ('a' + i);

	for (i = 0; i < 26; i++){
		printf("%c. ", alphas[i]);
		if((i % 5 == 0) && (i != 0))
		printf("\n");
	}
	return 0;
}
