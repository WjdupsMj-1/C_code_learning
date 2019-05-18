#include<stdio.h>
int judge(char,char);

int main(void)
{
	int jud = 0;
	int num_ei = 0;
	char ch[255] = {};
	int i = -1;

	printf("Enter words:\n");
	while(1){
	i++;
	scanf("%c", &ch[i]);
	if(i > 1)
	jud = judge(ch[i], ch[i - 1]);
		if(jud == 1)
			num_ei++;
	if(ch[i] == '#')
		break;
	}
	
	printf("ei appears %d times.\n", num_ei);
	return 0;
}

int judge(char ch1, char ch2)
{
	if(ch1 == 'i' && ch2 == 'e')
		return 1;
	return 0;
}
