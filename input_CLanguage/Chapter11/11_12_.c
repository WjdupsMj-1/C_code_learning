#include<stdio.h>
#include<ctype.h>
#include<string.h>

int * Enter(char * strin);
char * Words(char * strin);


int main(void)
{
	char string[200] = {};
	char ch;
	int length, word;
	int num[2] = {};
	do{
		length = 0;
//		fgets(string, 255, stdin);
	num = Enter(string);
	length = num[0];
	word = num[1];
	printf("there are %d chars and %d words.\n", length, word);
	printf("q to quit.\n");
	}while((ch = getchar()) != 'q');

	return 0;
}

int * Enter(char * strin)
{
	int num[2] = {};
	int i, j;
	char * p = strin;

	while(getchar() != '\n')
		continue;
	printf("Enter string.\n");
	fgets(p, 255, stdin);
	num[0] = strlen(p);
	for(i = 0; i < num[0]; i++){
		if(isalpha(p[i]) && isblank(p[i]))
			num[1]++;
		num[0]++;
	}
	return num;
}


/*
char * Words(char * strin)
{
	char * ch
}
*/
