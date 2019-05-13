#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void)
{
	int number;
	char ch;
	int n[255] = {};
	int guess = 50, high = 100, low = 0;
	printf("Please enter a number between 1~100.\n");
	while(scanf("%d", &number) != 1){
		getchar();
		printf("IS NOT A NUMBER!\n");
		}
	while(getchar() != '\n');
	printf("Respond b if my guess is bigger and with a s if it's small.\n"
			"if i am right, please give a y.\n");
		printf("Uh...is your number %d?\n", guess);
	while((ch = getchar()) != 'y'){
		switch(ch){
		case's':low = guess;
				break;
		case'b':high = guess;
				break;
		default:printf("Enter Correctly!\n");
		}
		while(getchar() != '\n')
			continue;
		guess = (high + low) / 2;
		printf("Well, then, is it %d?\n", guess);
	}
	printf("I knew i could do it!\n");
	return 0;
}

