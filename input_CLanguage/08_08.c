#include<stdio.h>

char MANU(void);
float NUMBER(char, int);
void RESULT(char, float, float);
int main(void)
{
	char choice;
	float first, second, result;
	while(1){
	first = second = result = choice = 0;
	choice = MANU();
	if(choice == 'q')
		break;
	printf("Enter Fiest number:");
	first = NUMBER(choice, 0);
	printf("Enter Second number:");
	second = NUMBER(choice, 1);
	RESULT(choice, first, second);
	while(getchar() != '\n')
		continue;
	}
	printf("Bye!\n");
	return 0;
}

char MANU(void)
{
	char ch;
	printf("Enter the operation of your choice:\n"
		   "a.add				s.subtract\n"
		   "m.multiply			d.divide\n"
		   "q.quit\n");
	while(1){
		ch = getchar();
		if(ch == 'a')
			break;
		else if(ch == 's')
			break;
		else if(ch == 'm')
			break;
		else if(ch == 'd')
			break;
		else if(ch == 'q')
			break;
		while(getchar() != '\n')
			continue;
		putchar(ch);
		printf(" is not a choice.\n");
	}
	return ch;
	
}

float NUMBER(char CHOI, int n)
{
	float num;
	char cha;

	while(1){
	while(scanf("%f", &num) != 1){
	cha = getchar();
	putchar(cha);
	printf(" is not a number:\nPlease enter a number: ");
	}
	if(CHOI == 'd' && n == 1 && num == 0){
	printf("\nEnter a number other than 0:");
	continue;
	}
	break;
	}

	return num;
}

void RESULT(char ch, float fi, float se)
{
	float re = 0;

	switch(ch){
		case'a':re = fi + se;
				printf("%f + %f = %f\n", fi, se, re);
				break;
		case's':re = fi - se;
				printf("%f - %f = %f\n", fi, se, re);
				break;
		case'm':re = fi * se;
				printf("%f * %f = %.3f\n", fi, se, re);
				break;
		case'd':re = fi / se;
				printf("%f / %f = %.3f\n", fi, se, re);
				break;
	}

	return;
}
