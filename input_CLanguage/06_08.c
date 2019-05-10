#include<stdio.h>
#include<ctype.h>
void result(float, float);

int main(void)
{
	float num1, num2;
	float dep, squ;
	int sizea;	
	while(1){
	printf("please enter a float for numbers:\n");
	scanf("%f %f", &num1, &num2);
	printf("num 1 is %4f, num 2 is %4f.%lu \n", num1, num2, sizeof(num2));
//	gets(&num2);
	if((sizeof(num1) + sizeof(num2)) == 8)
	result(num1, num2)
	else
	break;	
	}

	return 0;
}

void result(float a, float b)
{
	float dep, squ;
	dep = a - b;
	squ = a * b;
	printf("the result is %f.\n", dep / squ);		
	printf("(enter alpha to quit;\n)");
}
