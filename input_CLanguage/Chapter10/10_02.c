#include <stdio.h>

int main(void)
{

double copy_arr(double source[5], double target1, int i); 
double * copy_ptr(double source[5], double * ptr, int i); 
double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
double * ptr;
double target1[5];
double target2[5];
int index, i;

printf("the source class:\n");
for (i = 0; i < 5; i++)
    {   
    printf ("%f  ",source[i]);
    target1[i] = copy_arr(source, target1[i], i); 
    target1[i] = source[i];
    }   
    printf("\nthe target1 class:\n");
    ptr = copy_ptr(source, ptr, i); 
for (i = 0;i < 5; i++)
    {   
    printf("%f  ",target1[i]);
    target2[i] = ptr[i];
    }   
    printf("\nthe target2 class:\n");
for (i = 0; i < 5; i++)
    {   
    printf(" %f \n", target2[i]);
    }   

return 0;

}

double copy_arr(double source[5], double target1, int i)
{
target1 = source[i];
return target1;
}

double * copy_ptr(double source[5], double * ptr, int i)
{
ptr = source;
return ptr;
}
