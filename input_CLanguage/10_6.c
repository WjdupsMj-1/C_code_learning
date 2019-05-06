#include <stdio.h>

int main (void)
{

	double source[2][2] = {{1.1,2.2},{3.3,4.4}};
	double * target;
	int i, j;
	printf("the source class is: \n");
	for (i = 0; i < 2; i++)
		for (j = 0; j < 2; j++)
			printf("%6lf ",source[i][j]);
	printf("\n");
	target = &source[0][0];
	printf("the target class is:\n");
	for (i = 0; i < 4; i++)
		printf("%6lf ", target[i]);
	printf("\n");
	
	return 0;
}
