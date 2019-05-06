#include <stdio.h>
//int copy_arr(double source[5], double target1, int i);
//int copy_ptr(double ptr[5], double target2, int i);

int main(void)
{

double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
double * ptr;
double target1[5];
double target2[5];
int index, i;

printf("the source class:\n");
for (i = 0; i < 5; i++)
	{
	printf ("%f  ",source[i]);
//	target1[i] = copy_arr(source[5], target1, i);
	target1[i] = source[i];
	}
	printf("\nthe target1 class:\n");
for (i = 0;i < 5; i++)
	{
	printf("%f  ",target1[i]);
//	target2[i] = copy_ptr(ptr[5], target2, i);
	target2[i] = ptr[i] = source[i];
	}
	printf("\nthe target2 class:\n");
for (i = 0; i < 5; i++)
	{
	printf(" %f \n", target2[i]);
	}

return 0;

}
/*
int copy_arr(double source[5], double target1, int i)
{
target1 = source[i];
return target1;
}

int copy_ptr(double ptr[5], double target2, int i)
{
target2 = prt[i];
return target2;
}
*/
