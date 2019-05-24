#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 80
int main(int argc, char *argv[])
{
	int i;
	char *ch[MAX];
	char Cha;
	if(argc == 1){
		printf("there is no command.\n");
		return 0;
	}
	if(argc > 2)
		for(i = 1; i < argc; i++)
			printf("%s ", argv[argc - i]);
	printf("\nBye!\n");
	return 0;
}
