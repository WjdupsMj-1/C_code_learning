#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int ch;
	int number_upper = 0;
	int	number_lower = 0;

	while((ch = getchar()) != EOF){
	if(ch > 64 && ch < 91)
		number_upper++;
	else if(ch > 96 && ch < 123)
		number_lower++;
	putchar(ch);
	}

	printf("there are %d Upper and %d Lower.\n", number_upper, number_lower);

	return 0;
}
