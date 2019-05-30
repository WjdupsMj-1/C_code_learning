#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 40
void show_bstr(const char *str);
int main(int argc, char *argv[])
{	
	int i;
	char s1[MAX], s2[MAX];
	char s11[MAX], s22[MAX];
	for(i = 0; argv[1][i] != '\0'; i++)
		s1[i] = argv[1][i]&01 + '0';
	s1[i] = '\0';
	for(i = 0; argv[2][i] != '\0'; i++)
		s2[i] = argv[2][i]&01 + '0';
	s2[i] = '\0';
	printf("Original: %s, %s\n",s1, s2);
	for(i = 0; s1[i] != '\0'; i++)
		s11[i] = ~s1[i] + '0';	
	s11[i] = '\0';
	for(i = 0; s2[i] != '\0'; i++)
		s22[i] = ~s2[i] + '0';
	s22[i] = '\0';
	char *s3, *s4, *s5;
	for(i = 0; )
	printf("Turned: %s, %s\n",s11, s22);
	printf("%s & %s = %s.\n", s1, s2, s3);
	printf("%s | %s = %s.\n", s1, s2, s4);
	printf("%s ^ %s = %s.\n", s1, s2, s5);



/*
	int n1 = strlen(s1);
	int n2 = strlen(s2);
	itobs(s1);
	itobs(s2);
	show_bstr(s1);
	printf("\n");
	show_bstr(s2);
	printf("\n");*/
	return 0;

}

char * itobs(char *ps)
{
	int i;
	static int size = 8 * sizeof(char);
	
	for(i = size - 1; i >= 0; i--)
		ps[i] = (01 & ps[i]) + '0';
	ps[size] = '\0';

	return ps;
}

void show_bstr(const char *str)
{
	int i = 0;
	while(str[i])
	{
		putchar(str[i]);
		if(++i % 4 == 0 && str[i])
			putchar(' ');
	}
	return;
}
