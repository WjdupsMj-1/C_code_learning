#include<stdio.h>
#include<string.h>
char *string_in(char*, char*);
void enter(char *p);
int main(void)
{
    char S1[255];
    char S2[255];
    char *s1, *s2;
	char *ptr;
    char ch; 

    do{ 
	while(getchar() != '\n') 
	continue;
    enter(S1);
    enter(S2);
    s1 = S1; 
    s2 = S2;
	ptr = string_in(s1, s2);
	if(ptr == NULL)
		printf("%lu, %lu.Can't find %sIn %s\n",strlen(S1), strlen(S2), s2, s1);
	else
		printf("%s first appears at %p\n", s2, ptr);
	printf("enter q to quit.\n");
	}while(getchar() != 'q');

	return 0;
}

char *string_in(char *s1, char *s2)
{
	char* p;
	int i = strlen(s1);
	int j = strlen(s2);
	int m, n, ju;
	
	for(m = 0; m < i; m++){
		p = &s1[m];
		for(n = 0, ju = 1; n < j - 1 && ju != 0; n++){
			if(p[n] != s2[n])
				ju = 0;
		}
		if(ju != 0)
		return p;
	}
	
		return NULL;

}

void enter(char *p) 
{
    printf("Please enter for a string:\n");
    fgets(p, 255, stdin);
    return;
}

