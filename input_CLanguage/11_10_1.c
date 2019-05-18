#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define LIM 10
#define SIZE 80
char MANU(void);
int SCANS(char string[LIM][SIZE], char *ptr[LIM]);
char *function(char *ptr[LIM], char choice, int index);

int main(void)
{
	char string[LIM][SIZE];
	char *ptstr[LIM];
	char choice;
	int i, indexs;

	do{
	indexs = SCANS(string, ptstr);
	choice = MANU();
	
    while(indexs < LIM && gets(string[indexs]) != NULL && string[indexs][0] != '\0'){
        ptstr[indexs] = string[indexs];
        indexs++;
    }	

	for(i = 0; i < indexs; i++)
		puts(string[i]);
	printf("q to quit.\n");
	}while(getchar() != 'q');
    printf("Bye!\n");
	
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
//    while(getchar() != '\n')
//        continue;
    printf("\nenter your choice:");
    while((ch = getchar()) != 'a' && ch != 'b' && ch != 'c' & ch != 'd' && ch != 'q')
        printf("\n enter correctly.");

    return ch;
}

int SCANS(char string[LIM][SIZE], char *ptr[LIM])
{
	int ct = 0;

	printf("Enter Strings.\n");
	while(ct < LIM && gets(string[LIM]) != NULL && string[ct][0] != '\0'){
		ptr[ct] = string[ct];
		ct++;
	}
    return ct;
}
