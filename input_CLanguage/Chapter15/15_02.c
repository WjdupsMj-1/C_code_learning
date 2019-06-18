#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 40

int main(int argc, char *argv[])
{
	char io1[MAX];
	char io2[MAX];
	char io3[MAX];
	int i = 0;
	int j = 0;
	int a;

	if(argc != 3)
	{
	printf("Wrong Enter.!\n");
	exit(1);
	}
	for(i = 0; argv[1][i] != '\0'; i++)
	  io1[i] = argv[1][i];
	io1[i] = '\0';
	for(j = 0; argv[2][j] != '\0'; j++)
	  io2[j] = argv[2][j];
	io2[j] = '\0';
//Un-Complated ~
	for(i = 0; io1[i] != '\0'; i++)
	  io3[i] = ~(io1[i] & 01) + '2';
	io3[i] = '\0';
	printf("%s after ~ is %s\n", io1, io3);
//Un-Complated ~
	for(i = 0; io2[i] != '\0'; i++)
	  io3[i] = ~(io2[i] & 01) + '2';
	io3[i] = '\0';
	printf("%s after ~ is %s\n", io2, io3);
//Complated &
	for(i = 0; io2[i] != '\0'; i++)
	  io3[i] = io1[i] & io2[i];
	io3[i] = '\0';
	printf("%s after & %s is %s\n", io1, io2, io3);
//Complated |
	for(i = 0; io2[i] != '\0'; i++)
	  io3[i] = io1[i] | io2[i];
	io3[i] = '\0';
	printf("%s after | %s is %s\n", io1, io2, io3);
//Un-Complated ^
	for(i = 0; io2[i] != '\0'; i++)
	  io3[i] = (int)(io1[i] ^ io2[i]) + '0';
	io3[i] = '\0';
	printf("%s after ^ %s is %s\n", io1, io2, io3);
	
	return 0;

}

