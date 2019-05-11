#include<stdio.h>
#include<string.h>

int main(void)
{
	char ch[255] = {};
	int i = 0;
	int times = 0;
	int l = 0;

	printf("Enter words:\n");
	do{
	scanf("%c", &ch[i]);
	if(ch[i] == '.'){
		ch[i] = '!';
		i++;
		times++;
	}
	else if(ch[i] == '!'){
		ch[i + 1] = '!';
		i = i + 2;
		times++;
	}
	else if(ch[i] != '#'){
		i++;
	}
	else
	break;
	}while(ch[i] != '#');
	l = strlen(ch);	
	
	for(i = 0; i < l; i++)
	printf("%c", ch[i]);
	printf("\nthere are %d times change there!\n", times);
	
	return 0;
}
