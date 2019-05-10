#include<stdio.h>
#define SIZE 5
void add(double *, double *, double *, int);

int main(void)
{
	double class1[SIZE] = {1, 2, 3, 4, 5};
	double class2[SIZE] = {5, 4, 3, 2, 0};
	double class_add[SIZE] = {};
	int i;
	
	add(class1, class2, class_add, SIZE);
	printf("class1   class2   class_add\n");
	for (i = 0; i < SIZE; i++)
	printf("%5f     %5f     %5f     \n", 
			class1[i], class2[i], class_add[i]);
	return 0;
}

void add(double * c1, double * c2, double * c3, int s)
{
	int n;
	for (n = 0; n < s; n++)
		*(c3 + n) = c1[n] + c2[n];
	return;
}
