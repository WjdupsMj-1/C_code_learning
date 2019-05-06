#include<stdio.h>
void chline (char ch, int * i, int * j);

int main(void)
{
	char choice = 0;
	int i[10] = {};
	int j[10] = {};
	printf("please enter the code to chooce the line (A/B):\n");
	scanf("%c",&choice);
	
	int * _i = i;
	int * _j = j;
	
	chline(ch, *_i, *_j);
}

void chline(char ch, int * i, int * j)
{
	int k;
	char chooce = ch;
	if(chooce == 'A'){
	printf("please enter numbers for line A: (10 elements)\n");
	for (k = 0; k < i; k++)
	scanf("%d", i);
	}
	else if(chooce == 'B'){
	printf("please enter numbers for line B: (10 elements)\n");
	for (k = 0; k < j; k++)
	scanf("%d",j);
	}

}
