#include<stdio.h>
int main(void)
{
	int i, j, n, num;
	char ch;
	printf("please enter a Alpha to format:\n");
	scanf("%c", &ch);
	while(1){
	num = ch - 'A' + 1;
	if (num > 0 && num < 27){
	for (i = 0; i < num; i++){
		for (n = 0; n < num - i; n++)
			printf(" ");
		for (j = 0; j < i; j++)
		printf("%c", 'A' + j);
		for (; j >= 0; --j)
			printf("%c", 'A' + j);
		printf("\n");
	}
	}
	else 
	printf("please enter another Captal Alpha!(0 to quit)\n");
	scanf("%c", &ch);
	if (ch == '0')
	break;
	}
	return 0;
}
