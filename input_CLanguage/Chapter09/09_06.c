#include<stdio.h>
#include<ctype.h>
int read_and_check(char);

int main(void)
{
	char ch[10] = {'a', 'b', 'c', 'E', 'F',
				   'G', '0', 'x', 'y', 'z'};
	int * number;
	int num[10];
	int i;
	
	number = num;
	for (i = 0; i < 10; i++){
		number[i] = read_and_check(ch[i]);
		printf("%c is number %d \n", ch[i], num[i]);
	}

	return 0;
}

int read_and_check(char ch)
{
	int num = 0;
	if(isalpha(ch)){
		if(isupper(ch))
		num = ch - 'A' + 1;
		else
		num = ch - 'a' + 1;
	return num;
	}
	else
	return (-1);
}
