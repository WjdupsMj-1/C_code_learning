#include<stdio.h>
#include<stdlib.h>
#define MAX 40
typedef struct me{
	int no;
	int statu;
	char fname[MAX];
	char lname[MAX];
} ME;
char MANU(void);

int main(void)
{
	ME planes[12];
	FILE *fp;
	char ch;
	int i = 0, count = 0;
	int size = sizeof(ME);
	int nom = 0;	

	for(i = 0; i < 12; i++){
		planes[i].no = i + 1;
	}
	if((fp = fopen("ticket.bat", "r+b")) == NULL){
		fprintf(stderr, "Can't open file.\n");
		exit(1);
	}
	for(i = 0; i < 12 && fread(&planes[i], size, 1, fp) == 1; i++)
		continue;
	while(1){
	ch = MANU();
	switch(ch){
		case'a':for(i = 0, count = 0; i < 12; i++)
					if(planes[i].statu == 0)
						count++;
				printf("There are %d empty seats.\n", count);
				break;
		case'b':for(i = 0; i < 12; i++)
					if(planes[i].statu == 0)
						printf("No.%d is empty.\n", planes[i].no);
				break;
		case'c':for(i = 0; i < 12; i++)
					if(planes[i].statu == 1)
						printf("No. %d is %s, %s.\n", planes[i].no,
						planes[i].fname, planes[i].lname);
				break;
		case'd':printf("Please enter a No.\n");
				scanf("%d", &nom);
				while(nom > 12 || nom < 1 || planes[nom - 1].statu == 1){
					printf("unassignedable seat, enter again.\n");
					scanf("%d", &nom);
				}
				getchar();
				printf("Please enter the first name of the customer.\n");
				gets(planes[nom - 1].fname);
				printf("enter the last name.\n");
				gets(planes[nom - 1].lname);
				planes[nom - 1].statu = 1;
				break;
		case'e':printf("Please enter a No.\n");
				scanf("%d", &nom);
				while(nom > 12 || nom < 1 || planes[nom - 1].statu == 0){
					printf("usage seat, enter again.\n");
					scanf("%d", &nom);
				while(getchar() != '\n')
					continue;
				}
				planes[nom - 1].statu = 0;
				break;
		case'f':break;
	}
	if(ch == 'f')
		break;
	}
	rewind(fp);
	fwrite(&planes[0], size, 12, fp);
	if(fclose(fp)){
		fprintf(stderr, "Error close.");
		exit(3);
	}
	return 0;
}

char MANU(void)
{
	char choice;
	do{
	printf("To choose a function, enter its letter label: \n"
			"a) Show number of empty seats\n"
			"b) Show list of empty seats\n"
			"c) Show alphabetical list of seats\n"
			"d) Assign a customer to a seat assignment\n"
			"e) Delete a seat assignment\n"
			"f) Quit\n");
	choice = getchar();
	}while(choice > 102 || choice < 97);
	while(getchar() != '\n')
		continue;

	return choice;
}
