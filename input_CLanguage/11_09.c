#include<stdio.h>
#include<string.h>

void enter(char*);
char* delete_space(char*);

int main(void)
{
	char S[255];
	char* s;
	
	while(getchar() != '\n')
		continue;
    do{ 
        enter(S);
		s = S;
        s = delete_space(s);
		printf("\nafter delete space:\n");
		puts(s);
        printf("Enter q to quit.\n");
    }while(getchar() != 'q');
}

void enter(char* p)
{
    printf("Please enter for string:\n");
    fgets(p, 255, stdin);    
    return;
}

char* delete_space(char* s)
{
	int i,j;
	char *p;

	p = s;
	for(i = 0, j = 0; s[j] != '\0'; i++, j++){
		while(s[j] == 32)
			j += 1;
		p[i] = s[j];
	}
	p[i] = '\0';

	return p;
}
