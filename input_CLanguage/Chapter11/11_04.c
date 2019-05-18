#include<stdio.h>
#include<string.h>

void ENTER(char *);
char INDEX(void);
char* SEARCH(char(*TARGET), char index);

int main(void)
{
	char target[255] = {};
	char index;
	char result[255] = {};
	char *p = &result[0];
	int m, i;
	
	do{
	printf("To the Target \n");
	ENTER(target);
	index = INDEX();
	p = SEARCH(target,index);
	while(getchar() != '\n');
	for(i = 0; i < strlen(target); i++)
	printf("%c", target[i]);
	if(p == NULL)
		printf("there is no index in the target.\n");
	else{
		printf("the %c first appears at \"", index);
		for(i = 0; i < 4; i++)
			printf("%c", p[i]);
		printf("\"\n");
	}
	printf("enter q to quit.\n");
	}while(getchar() != 'q');
	

	return 0;
}

char*SEARCH(char(*TARGET),char index)
{
	char *p;
	int i = 0, jud = 0;

	while(i < strlen(TARGET)){
		p = &TARGET[i];
		if(*p == index){
			jud = 1;
			break;
		}
		i++;
	}
	if(jud == 0)
	return NULL;
	else
	return p;
}


void ENTER(char(*PTR))
{
	int i = 0;
	
	printf("Enter the string.\n");
	while((PTR[i++] = getchar()) != '\n');
	return;
}

char INDEX(void)
{
	char ch = 0;
	printf("Enter the index.\n");
	ch = getchar();
	return ch;
}
