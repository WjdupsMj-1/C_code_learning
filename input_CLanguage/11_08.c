#include<stdio.h>
#include<string.h>

void down_puts(char* s, int num);
void enter(char *s);

int main(void)
{
	char s[255];
	int number;
	
	while(getchar() != '\n');
	do{
		enter(s);
		number = strlen(s) - 1;
		down_puts(s, number);
		printf("\nEnter q to quit.\n");
	}while(getchar() != 'q');

	return 0;
}

void enter(char* p)
{
    printf("Please enter for string:\n");
    fgets(p, 255, stdin);    
    return;
}

void down_puts(char *s, int num)
{
	int i;

	for (i = num; i > 0; --i)
		putchar(s[i]);
	printf("\n");
	return;
}
