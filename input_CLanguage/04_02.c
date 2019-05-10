#include<stdio.h>
#include<string.h>

int main(void)
{
	char name[64] = {};
	int a = 0;
	printf("please enter your name:\n");
	scanf("%s",name);
	a = strlen(name);
	printf("a: \"%s\".\n",name);
	printf("b: \"%20s\". \n",name);
	printf("c: \"%-20s\". \n",name);
	printf("d: \"%s   \". \n",name);
	printf("a = %d\n",a);
	return 0;
}
