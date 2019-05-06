#include <stdio.h>

int main(void)
{

double copy_arr(double source[7], double target1, int i);
double * copy_ptr(double source[7], double * ptr, int i);
double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5,6.6,7.7};
double * ptr;
double target1[3];
double target2[5];
int index, i;

printf("the source class:\n");
for (i = 0; i < 7; i++)
	{
	printf ("%f  ",source[i]);
	}
	printf("\nthe target1 class:\n");
	ptr = copy_ptr(source, ptr, i);
for (i = 0;i < 3; i++)
	{
	target1[i] = ptr[i + 2];
	printf("%f  ",target1[i]);
	}
printf("\n");
/*	printf("\nthe target2 class:\n");
for (i = 0; i < 5; i++)
	{
	printf(" %f \n", target2[i]);
	}
*/
return 0;

}

double copy_arr(double source[7], double target1, int i)
{
target1 = source[i];
return target1;
}

double * copy_ptr(double source[7], double * ptr, int i)
{
ptr = source;
return ptr;
}

