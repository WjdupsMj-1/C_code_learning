#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 40
int main(void)
{
	int position;
	FILE *fp;
	char name[MAX];
	char ch;
	printf("Please enter a file name: ");
	gets(name);
	if((fp = fopen(name, "r")) == NULL){
		fprintf(stderr, "Error opening %s file", name);
		exit(1);
	}
	printf("Enter a position number: ");
	while(scanf("%d", &position) == 1){
		if(fseek(fp, (long)position, SEEK_SET)){
			fprintf(stderr, "Error finding this position.\n");
			continue;
		}
		while((ch = getc(fp)) != '\n')
			putchar(ch);
		printf("Enter next position num or quit with alpha.\n");
		rewind(fp);
	}
	if((fclose(fp)) != 0){
		fprintf(stderr, "Error Closing.\n");
		exit(2);
	}
	printf("Bye!\n");
	
	return 0;
}
