#include<stdio.h>

int main(void)
{
	char first_name[20] = {};
	char last_name[20] = {};
	
	printf("please enter your first name:\n");
	scanf("%s",first_name);
	printf("please enter your last name:\n");
	scanf("%s", last_name);
	
	printf("\nyour last name is: %s\nyour first name is %s.\n",
		last_name, first_name);
	return 0;
}
