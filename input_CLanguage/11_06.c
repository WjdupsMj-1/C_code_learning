#include<stdio.h>
#include<string.h>
void enter(char *p);
char* trncpy(char *S1,const char *S2, int n); 
int main(void)
{
	char S1[255];
	char S2[255];
	char *s1, *s2;

	int n;
	char ch;

	do{
	enter(S1);
	enter(S2);
	s1 = S1;
	s2 = S2;
	printf("Please enter how many chars you want to cut from S2:\n");
	while(scanf("%d", &n) != 1)
		printf("enter a number!\n");
	s1 = trncpy(s1, S2, n);
	printf("%lu after copy the string is:\n",sizeof(s2)/sizeof(char));
	printf("%s", S1);
	getchar();
	printf("\nq to quit.\n");
	}while((ch = getchar()) != 'q');
	printf("Bye!\n");

	return 0;
}

char* trncpy(char *s1,const char *s2, int n)
{
	char *p;
	int i, j;

	i =	strlen(s1);
	if(n <= strlen(s2))
		for(j = 0; j < n; j++)
			s1[i + j] = s2[j];
	else
		for(j = 0; j < strlen(s2); j++)
			s1[i + j] = s2[j];
	s1[i + j + 1] = '\0';
	
	return s1;
}

void enter(char *p)
{
	printf("Please enter for string:\n");
	gets(p);	
	return;
}
