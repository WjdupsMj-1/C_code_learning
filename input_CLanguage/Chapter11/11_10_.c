#include<stdio.h>
#include<string.h>

char manu(void);
void scan(int m, int n, char (*s)[m]);
void A(int m, int n, char (*s)[m]);
void B(int m, int n, char (*s)[m]);
void C(int m, int n, char (*s)[m]);
void D(int m, int n, char (*s)[m]);

int main(void)
{	
	int m = 200;
	int n = 10;
	char S[m][n];
	char (*string)[m];
	char *ptr_char;
	char ch;
	
	do{
		scan(m, m, string);
		ch = manu();
		if(ch == 'q')
			continue;
		switch(ch){
			case'a':A(m, m, string);
					break;
			case'b':B(m, m, string);
					break;
			case'c':C(m, m, string);
					break;
			case'd':D(m, m, string);
					break;
		}
	}while(ch != 'q');
	printf("\nBye!\n");

	return 0;
}

char manu(void)
{
	char ch;
	int i;

	for(i = 0; i < 60 ;i++)
		putchar('*');
	printf("\nPrint the strings refer\n");
	printf("a.to the string;	 b.to ASIC;\n"
		   "c.to length;	     d.to first word length;\n"
		   "q.quit\n");
	for(i = 0; i < 60; i++)
		putchar('*');
	while(getchar() != '\n')
		continue;
	printf("\nenter your choice:");
	while((ch = getchar()) != 'a' && ch != 'b' && ch != 'c' & ch != 'd' && ch != 'q')
		printf("\n enter correctly.");

	return ch;
}

void scan(int m, int n, char (*s)[n])
{
	int i = 0;
	int j = 0;
	char *p[n];
	while(getchar() != '\n')
		continue;
/*	do{
		printf("Please enter for No%d string:\n", i);
		for(j = 0; s[i][j] != '\n'; j++){
			s[i][j] = getchar();
			if(s[i][j] == EOF)
				return;
		i++;
		}
	}while(i < n);
*/	
	for(i = 0; i < n; i++){
		printf("Please enter for No%d string:\n", i + 1);
		gets(p[i]);
	}
	return;
}

void A(int m, int n, char (*s)[n])
{
	int i;
	for(i = 0; i < n; i++ ){
	puts(s[i]);
	putchar('\n');
	}
	return;
}

void B(int m, int n, char (*s)[m])
{
	int ch[n][3];
	char *ptr[n];
	int i, j;
	int k = 9;
		
	for(i = 0; i < n; i++){
		ch[i][0] = (int)s[i][0];
		ch[i][1] = i;
		ptr[i] = s[i];
	}
	for(i = n - 1; i > 0; i--){
		ch[i][2] = 0;
		for(j = 0; j <= i; j++){
			if(ch[i][0] < ch[j][0] && ch[j][1] != 200){
				ch[i][2] = ch[j][1];
				ch[j][1] = 200;//将排序过的元素剔除选择；
			}
			else if(ch[i][0] == ch[j][0]){
				ch[i][2] = k--;
				ch[k][2] = k--;
				ch[j][1] = 200;
			}
		}
	}
	
	printf("Print refer to ASCII:(when echo, put it back)\n");
	int nu;
	for(i = 0, nu = 0; i < n; i++){
		nu = ch[i][2];
		puts(ptr[nu]);
		putchar('\n');
	}
	return;
}

void C(int m, int n, char (*s)[m])
{
	int ch[n][3];
	char *ptr[n];
	int i, j;
	int k = 9;

    for(i = 0; i < n; i++){
        ch[i][0] = strlen(s[i]);
        ch[i][1] = i;
        ptr[i] = s[i];
    }   
    for(i = n - 1; i > 0; i--){
        ch[i][2] = 0;
        for(j = 0; j <= i; j++){
            if(ch[i][0] < ch[j][0] && ch[j][1] != 200){
                ch[i][2] = ch[j][1];
                ch[j][1] = 255;//将排序过的元素剔除选择；
            }   
            else if(ch[i][0] == ch[j][0]){
                ch[i][2] = k--;
                ch[k][2] = k--;
                ch[j][1] = 255;
            }   
        }   
    }   
    printf("Print refer to length:(when echo, put it back)\n");
	int nu;
	for(i = 0, nu = 0; i < n; i++){
		nu = ch[i][2];
		puts(ptr[nu]);
		putchar('\n');
	}

	return;
}

void D(int m, int n, char (*s)[m])
{
    int ch[n][3];
	char (*p)[m] = s;
    char *ptr[n];
    int i, j, mu;
    int k = 9;

	for(i = 0; i < n; i++){
		for(j = 0, mu = 0; p[i][j] != ' '; j++){
			while(p[i][0] == ' ' && p[i][j++] == ' ')
				continue;
			mu++;
		}
		ch[i][0] = mu;
	}
    for(i = 0; i < n; i++){	
		ch[i][1] = i;
		ptr[i] = s[i];
	}   
    for(i = n - 1; i > 0; i--){
        ch[i][2] = 0;
        for(j = 0; j <= i; j++){
            if(ch[i][0] < ch[j][0] && ch[j][1] != 200){
                ch[i][2] = ch[j][1];
                ch[j][1] = 255;//将排序过的元素剔除选择；
            }   
            else if(ch[i][0] == ch[j][0]){
                ch[i][2] = k--;
                ch[k][2] = k--;
                ch[j][1] = 255;
            }   
        }   
    }   
    printf("Print refer to words:(when echo, put it back)\n");
	int nu;
	for(i = 0, nu = 0; i < n; i++){
		nu = ch[i][2];
		puts(ptr[nu]);
		putchar('\n');
	}
    return;
}
