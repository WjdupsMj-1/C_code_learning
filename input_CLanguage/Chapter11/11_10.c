#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define LIM 10
#define SIZE 80
char MANU(void);
int SCANS(char (*ptr)[SIZE]);
//char *function(char *ptr[LIM], char choice, int index);

int main(void)
{
    char string[LIM][SIZE];
    char (*ptstr)[SIZE];
    char choice;
    int i, indexs;

	ptstr = string;
    indexs = SCANS(ptstr);
//    choice = MANU();
    
    for(i = 0; i < indexs; i++)
    {
	    puts(string[i]);
		printf("\n\n\n");
	}


//    printf("q to quit.\n");
//    }while(getchar() != 'q');
//    printf("Bye!\n");
    
    return 0;
}

int SCANS(char (*ptr)[SIZE])
{
	int lim = 0;
	int size = 0;
	
	printf("Enter strings.\n");
	while(lim < LIM && ptr[lim][size] != EOF){
		size = 0;
		while(size < SIZE && ptr[lim][size] != '\n'){
			ptr[lim][size] = getchar();
			size++;
		}
		lim++;
	}
	ptr[lim][size] = EOF;
	
	return lim;

}
