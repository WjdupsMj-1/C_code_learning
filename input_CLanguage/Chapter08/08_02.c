#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int ch;
	int i = 0;
	
	while((ch = getchar()) != EOF){
	if(i % 10 == 0)
		printf("\n");
	if(ch == '\n')
		printf("\\n = %4d;", ch);
	else if(ch == '\t')
		printf("\\t = %4d;", ch);
	else if(ch == 32)
		printf("SP = %4d;", ch);
	else if(iscntrl(ch))
		printf("^%c = %4d;", ch + 64, ch);
	else
	printf(" %c = %4d;", ch, ch);
	i++;
	}
	printf("\nthere are %d enters.\n", i);
		
	return 0;
}
