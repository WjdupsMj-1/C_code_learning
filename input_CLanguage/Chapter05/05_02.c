#include<stdio.h>
#define UP 10

int main(void)
{
	int en, i;
	char ch = 0;
	while(1){
	printf("please enter an int number:\n");
	scanf("%d", &en);
	for (i = 0; i <= UP; i++)
	printf("%d  ", en + i);
	printf("\nenter q to quit;\n");
	scanf("%c", &ch);
	if ((ch == 'q') || (ch == 'Q'))
	break;
	}
	return 0;
}
