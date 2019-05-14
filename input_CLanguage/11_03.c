#include<stdio.h>
#include<string.h>

int main(void)
{
	char ch[255] = {};
	int i = 0, j = 0;
	
	printf("Enter the words:\n");
/*	do{
		ch[i] = getchar();
		if(i == 0)
			while(ch[i] == 9 || ch[i] == 10 || ch[i] == 32)
				ch[i] = getchar();
		while(ch[i] != 9 && ch[i] != 32)
			ch[];
		i++;
	}while(ch[i - 1] != 10);
*/
	if(i == 0){
		ch[i] = getchar();
		while(ch[i] == 9 || ch[i] == 10 || ch[i] == 32)
			ch[i] = getchar();
	i = 1;
	}
	while((ch[i] = getchar()) != 10){
		if(ch[i] != 9 && ch[i] != 32)
			i++;
		else 
			break;
	}
	printf("the word is:\n");
	for(j = 0; j < i; j++)
		putchar(ch[j]);
	printf("\n");
	return 0;
}
