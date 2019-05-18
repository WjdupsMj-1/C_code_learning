#include<stdio.h>
#include<string.h>
int is_within(char, char*);
void Enter_string(char*);

int main(void)
{
	char class[255] = {};
	char index = 0;
	int answer = 0;
	char ch;

	do{
	printf("enter the index.\n");
	index = getchar();
	Enter_string(class);
	answer = is_within(index, class);
	if(answer == 1)
		printf("there is!\n");
	else
		printf("there isn't!\n");
	printf("the index is %c\n", index);
	while(getchar() != '\n');
	printf("q to quit.\n");
	}while(getchar() != 'q');
	return 0;
}

int is_within(char ch, char*class)
{
	int ans = 0;
	int i = 0;
	for(i = 0; i < strlen(class); i++){
		if(class[i] == ch){
			ans = 1;
			break;
		}
	}
	return ans;
}

void Enter_string(char*class)
{
	int i = 0;

	while(getchar() != '\n');
	printf("enter the string.\n");
	while((class[i++] = getchar()) != '\n');
	return;
}


