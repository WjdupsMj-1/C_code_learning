#include<stdio.h>
void print_cube(float);

int main(void)
{
	float enter;
	
	while(1){
	printf("please enter a number to cube(enter 0 to quit):\n");
	scanf("%f", &enter);
	if (enter == 0)
	break;
	print_cube(enter);
	}
	printf("bye!");
	return 0;
}

void print_cube(float in)
{
	float cube = 0;
	cube = in * in * in;
	printf("the cube of %.2f is %.2f.\n", in, cube);
	return;
}

