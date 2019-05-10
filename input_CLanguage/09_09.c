#include<stdio.h>
void to_binary_n(int enter, int index);

int main(void)
{
	int enter = 0;
	int index = 0;
	int out = 0;
	char ch = 0;
	while(1){
	printf("please enter a number you want binary:\n");
	scanf("%d",&enter);
	printf("please enter a index:\n");
	scanf("%d", &index);
	to_binary_n(enter, index);
	printf("\nenter q to quit.\n");
	scanf("%c", &ch);

	if(ch == 'q' || ch == 'Q')
	break;
	}
	return 0;
}

void to_binary_n(int enter, int index)
{
	int i = 0;
	int re = 0;
	int out[64] = {};//留足够空间储存字符
	while(1){
	re = enter % index;
	out[i] = re;
	enter /= index;
	printf("%4d%4d%4d%4d\n",enter, re, out[i], i);
		if (enter == 0)
		break;
	i++;
	}
	printf("the result is:\n");
	for(; i >= 0; i--)
	printf("%d",out[i]);//倒序打印字符
	return;
}
