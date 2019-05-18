#include<stdio.h>
#include<string.h>

int main(void)
{
	char ch[255] = {};
	int length;
	int i = -1;

	printf("Enter the words:('Enter' to quit)\n");
	do{
		i++;
		scanf("%c", &ch[i]);
	}while(ch[i] != '\n');
	
	length = strlen(ch);
	
	for(i = 1; i <= length; i++)
	printf("%c", ch[length - i]);

	printf("\n");
	
	return 0;
}
