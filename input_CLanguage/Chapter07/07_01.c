#include<stdio.h>
#include<string.h>

int main(void)
{
	char ch[255] = {};
	int num_space = 0;
	int num_return = 0;
	int num_others = 0;
	int i;	
	printf("please enter the words:\n");
	i = -1;
	do{
		i++;
		scanf("%c", &ch[i]);
		if(ch[i] == ' ')
			num_space++;
		else if(ch[i] == '\n')
			num_return++;
		else if(ch[i] == '#')
			break;
		else
			num_others++;
	}while(ch[i] != '#');
	
	printf("there are %d space, %d return and %d other charectors.\n", num_space, num_return, num_others);
	
	return 0;
}
