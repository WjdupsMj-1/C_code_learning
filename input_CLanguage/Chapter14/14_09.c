#include<stdio.h>
#include<stdlib.h>
#define MAX 40
typedef struct me{
	int fil;
	int no;
	int statu;
	char fname[MAX];
	char lname[MAX];
} ME;
char MANU(void);
int flight(void);

int main(void)
{
	ME planes[4][12];
	FILE *fp;
	char ch;
	int i = 0, count = 0;
	int size = sizeof(ME);
	int nom = 0;	
	enum flight{f102, f311, f444, f519};
	int fi;
	for(int j = f102; j < 4; j++)
		for(i = 0; i < 12; i++){
			planes[j][i].no = i + 1;
			planes[j][i].fil = j;
		}
	if((fp = fopen("ticket.bat", "r+b")) == NULL){
		fprintf(stderr, "Can't open file.\n");
		exit(1);
	}
	fread(&planes[0], size * 12, 4, fp);
	while(1){
	fi = flight();
	while(1){
	ch = MANU();
	switch(ch){
		case'a':for(i = 0, count = 0; i < 12; i++)
					if(planes[fi][i].statu == 0)
						count++;
				printf("There are %d empty seats.\n", count);
				break;
		case'b':for(i = 0; i < 12; i++)
					if(planes[fi][i].statu == 0)
						printf("No.%d is empty.\n", planes[fi][i].no);
				break;
		case'c':for(i = 0; i < 12; i++)
					if(planes[fi][i].statu == 1)
						printf("No. %d is %s, %s.\n", planes[fi][i].no,
						planes[fi][i].fname, planes[fi][i].lname);
				break;
		case'd':printf("Please enter a No.\n");
				scanf("%d", &nom);
				while(nom > 12 || nom < 1 || 
						planes[fi][nom - 1].statu == 1){
					printf("unassignedable seat, enter again.\n");
					scanf("%d", &nom);
				}
				getchar();
				printf("Please enter the first name of the customer.\n");
				gets(planes[fi][nom - 1].fname);
				printf("enter the last name.\n");
				gets(planes[fi][nom - 1].lname);
				planes[fi][nom - 1].statu = 1;
				break;
		case'e':printf("Please enter a No.\n");
				scanf("%d", &nom);
				while(nom > 12 || nom < 1 || 
						planes[fi][nom - 1].statu == 0){
					printf("usage seat, enter again.\n");
					scanf("%d", &nom);
				while(getchar() != '\n')
					continue;
				}
				planes[fi][nom - 1].statu = 0;
				break;
		case'f':break;
		case'g':break;
	}
	if(ch == 'g' || ch == 'f')
		break;
	}
	if(ch == 'g')
		break;
	}
	rewind(fp);
	fwrite(&planes[0], size * 12, 4, fp);
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
			"f) back\n"
			"g) quit\n");
	choice = getchar();
	}while(choice > 103 || choice < 97);
	while(getchar() != '\n')
		continue;

	return choice;
}

int flight(void)
{
	int flight;
	printf("Enter your flight.");
	scanf("%d", &flight);
	while(flight != 102 && flight != 311 && flight != 444 && flight != 519){
		printf("Enter again!\n");
		scanf("%d", &flight);
	}
	switch(flight){
		case 102:flight = 0;
				 break;
		case 311:flight = 1;
				 break;
		case 444:flight = 2;
				 break;
		case 519:flight = 3;
				 break;
	}
	while(getchar() != '\n')
		continue;
	return flight;
}
