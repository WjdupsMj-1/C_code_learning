#include<stdio.h>
#include<string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100
struct book{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};
void title(struct book *lib[MAXBKS], int count);
void value(struct book *lib[MAXBKS], int count);
int main(void)
{
	struct book library[MAXBKS];
	int count = 0;
	int index;
	printf("Please enter the book title.\n");
	printf("Press[Enter]at the start of a line to stop.\n");
	while(count < MAXBKS && gets(library[count].title) != NULL
						&& library[count].title[0] != '\0')
	{
	printf("Now enter teh author.\n");
	gets(library[count].author);
	printf("Now enter the value.\n");
	scanf("%f", &library[count++].value);
	while(getchar() != '\n')
		continue;
	if(count < MAXBKS)
		printf("Enter the next title.\n");
	}
	struct book *rank[MAXBKS];
	for(int i = 0; i < count; i++)
	rank[i] = &library[i];
	if(count > 0)
	{
		printf("\nRank by original order the list is:\n");
		for(int i = 0; i < count; i++)
			printf("%s by %s: $%.2f\n", library[i].title,
					library[i].author, library[i].value);
		printf("\nRank by title order the list is:\n");
			title(rank, count);
		printf("\nRank by value order the list is:\n");	
			value(rank, count);
	}
	printf("Bye!\n");

	return 0;
}


void title(struct book *lib[MAXBKS], int count)
{
	int num, i, j;
	num = count;
	struct book *temp;
	for(i = 0; i < num; i++){
		for(j = i; j < num; j++)
			if(strncmp(lib[i]->author, lib[j]->author, 1) > 0){
				temp = lib[j];
				lib[j] = lib[i];
				lib[i] = temp;
			}
	}
	for(i = 0; i < num; i++){
		printf("%s by %s: $%.2f\n", lib[i]->title,
				lib[i]->author, lib[i]->value);
	}
	return;
}

void value(struct book *lib[MAXBKS], int count)
{
	int num, i, j;
	num = count;
	struct book *temp;
	for(i = 0; i < num; i++){
		for(j = i; j < num; j++)
			if(lib[i]->value > lib[j]->value){
				temp = lib[j];
				lib[j] = lib[i];
				lib[i] = temp;
			}
	}
	for(i = 0; i < num; i++){
		printf("%s by %s: $%.2f\n", lib[i]->title,
				lib[i]->author, lib[i]->value);
	}
	return;
}

