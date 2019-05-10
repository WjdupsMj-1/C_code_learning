#include<stdio.h>
#include<string.h>

int main(void)
{
	char ch[64] = {};
	int length;
	int i;

	printf("please enter a word to transform:\n");
	scanf("%s",ch);
	length = strlen(ch);
	for(i = 1; i <= length; i++)
		printf("%c", ch[length - i]);
	printf("\n");
	return 0;
}
