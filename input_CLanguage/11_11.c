#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char ch;
	char prev;
	int num = 0;
	int words = 0;
	int upper = 0;
	int lower = 0;
	int punct = 0;
	int number = 0;
	int enters = 0;
	
	while((ch = getchar()) != EOF){
		if(isblank(prev) && isalpha(ch))
			words++;
		{
		if(ch == '\n')
			enters++;
		else if(isupper(ch))
			upper++;
		else if(islower(ch))
			lower++;
		else if(isupper(ch))
			upper++;
		else if(ispunct(ch))
			punct++;
		else if(isdigit(ch))
			number++;
		}
		putchar(ch);
		num++;
		prev = ch;
	}
	printf("\nthere are %d words; %d uppers; %d lowers; %d puncts; %d numbers.\n"
			,words, upper, lower, punct, number);
	printf("there are %d chars in the file.\n", num);
	return 0;
}
