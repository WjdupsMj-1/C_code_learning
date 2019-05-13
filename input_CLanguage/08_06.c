#include<stdio.h>

int main(void)
{
	char ch;

	while(1){
	ch = getchar();	
	if (ch == '\n')
		continue;
	else if(ch == ' ')
		continue;
	else if(ch == '\t')
		continue;
	else 
		break;
	}
	printf("%d", ch);
	return 0;
}
