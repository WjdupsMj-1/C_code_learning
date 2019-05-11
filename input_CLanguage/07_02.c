#include<stdio.h>
#include<string.h>

int main(void)
{
	char ch[255] = {};
	int i = -1;
	int n;

	printf("Enter words:\n");
	do{
	i++;
	scanf("%c", &ch[i]);
	if (ch[i] == '#')
	break;
	}while(ch[i] != '#');
	n = strlen(ch);
	
	for(i = 0; i < n; i++){
		printf("%c = %d; ", ch[i], (int)ch[i]);
		if((i + 1) % 8 == 0) 
			printf("\n") ;
	}
	printf("\n");
	return 0;
}
