#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 80
#define AMO 10
char MANU(void);
char function(int num, char ch, char *str[num]);
int words(char *string);

int main(void)
{
	char ch;
	char strings[AMO][MAX];
	char *strpo[AMO];
	int num = 0;
	printf("Enter strings less than 10: \n");
	while(num < 10 && fgets(strings[num], MAX, stdin) != 0)
		num++;
	printf("You just put in below strings:\n\n");
	for(int i = 0; i < num; i++){
		puts(strings[i]);
		strpo[i] = strings[i];
	}
	ch = MANU();
	if(ch == 'q')
		goto quit;
	while((ch = function(num, ch, strpo)) != 'q')
		continue;
quit:	printf("Bye!\n");

	return 0;
}

char MANU(void)
{
    char ch; 
    int index;

    for(index = 0; index < 60 ;index++)
        putchar('*');
    printf("\nPrint the strings refer\n");
    printf("a.to the string;     b.to ASIC;\n"
           "c.to length;         d.to first word length;\n"
           "q.quit\n");
    for(index = 0; index < 60; index++)
        putchar('*');
    while(getchar() != '\n')
        continue;
    printf("\nenter your choice:");
    while((ch = getchar()) != 'a' && 
			ch != 'b' && ch != 'c' &&
			ch != 'd' && ch != 'q')
        printf("\n enter correctly.");
//	while(function(ch) != 'q')
//		continue;
    return ch; 
}

char function(int num, char ch, char *str[num])
{
	int index, i, j;
	char *strp[num];
	char *temp;
	char cho;

	for(i = 0; i < num; i++)
		strp[i] = str[i];
	switch(ch)
	{
		case'a':for(i = 0; i < num; i++)
					strp[i] = str[i];
			break;
		case'b':for(i = 0; i < num; i++){
					for(j = i; j < num; j++)
						if(strcmp(strp[i], strp[j])){
							temp = strp[i];
							strp[i] = strp[j];
							strp[j] = temp;
						}	
				}
			break;
		case'c':for(i = 0; i < num; i++){
					for(j = i; j < num; j++)
						if(strlen(strp[i]) > strlen(strp[j])){
							temp = strp[i];
							strp[i] = strp[j];
							strp[j] = temp;
						}	
				}
			break;
		case'd':for(i = 0; i < num; i++){
					for(j = i; j < num; j++)
						if(words(strp[i]) > words(strp[j])){
							temp = strp[i];
							strp[i] = strp[j];
							strp[j] = temp;
						}	
				}
			break;
	}
	for(i = 0; i < num; i++)
		puts(strp[i]);
	while(getchar() != '\n')
		continue;
	printf("Enter next choice: ");
    while((cho = getchar()) != 'a' && 
			cho != 'b' && cho != 'c' &&
			cho != 'd' && cho != 'q')
        printf("\n enter correctly.");

	return cho;
}

int words(char *string)
{
	int count;
	int i = 0;

	while(string[i] == ' ')
		i++;
	while(string[i++] != ' ' && string[i] != EOF)
		count++;	

	return count;
}
