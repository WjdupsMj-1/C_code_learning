#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 80
int atoint(char *);

int main(void)
{
	char str[MAX];
	int result, i, num;
	char ch;
	printf("Please enter a number: ");
	scanf("%s", str);
	puts(str);
	for(i = 0, num = 0; i < strlen(str); i++){
		ch = str[i];
		if(isdigit(ch))
			num++;
	}
	if(num != strlen(str)){
		printf("Wrong, number.\n");
		return 0;
	}
	result = atoint(str);
	printf("the result is %d.\n", result);

	return 0;
}

int atoint(char *s)
{
	int re = 0, i, j, in;
	long int index = 1;
	in = strlen(s);
	for(i = 1; i <= in; i++, index = 1){
		for(j = in - i; j > 0; j--)
			index *= 10;
	re += index * (s[i - 1] - '0');
	}

	return re;
}
