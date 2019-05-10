#include<stdio.h>
void print(char, int, int);

int main(void)
{
	int rows = 0;
	int cols = 0;
	char ch = 0;
	
	printf("please enter the ch you want to print:\n");
	scanf("%c", &ch);
	printf("how many rows you want to print?\n");
	scanf("%d", &rows);
	printf("how many cols you want to print?\n");
	scanf("%d", &cols);
	
	print(ch,rows,cols);

	return 0;
}

void print (char ch, int rows, int cols)
{
	int i, j;
	for (j = 0; j < cols; j++){
		for (i = 0; i < rows; i ++)
		printf("%c",ch);
	printf("\n");
	}
	return;
}
