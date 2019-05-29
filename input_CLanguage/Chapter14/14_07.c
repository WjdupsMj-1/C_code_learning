#include<stdio.h>
#include<stdlib.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10

typedef struct book{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
}BOOK;

int main(void)
{
	BOOK library[MAXBKS];
	int count = 0;
	int index, filecount;
	FILE *fp;
	int size = sizeof(BOOK);
	char ch;

	if((fp = fopen("book.bat", "r+b")) == NULL){
		fprintf(stderr, "Error Open.\n");
		exit(1);
	}
	rewind(fp);
	while(count < MAXBKS && fread(&library[count], size, 1, fp) == 1){
		if(count == 0)
			puts("Current contents of book.dat ");
		printf("%s by %s: $%.2f\n", library[count].title, library[count].author, library[count].value);
		puts("Do you want modify or delete it? modify enter M, Delete enter D, nothing [Enter].\n");
		ch = getchar();
		switch(ch){
			case'M':
			case'm':getchar();
					puts("Enter the title.");
					gets(library[count].title);
					puts("Enter the author.");
					gets(library[count].author);
					puts("Enter the value.");
					scanf("%f", &library[count].value);
					while(getchar() != '\n')
						continue;
					break;
			case'D':
			case'd':library[count].value = -1;
			//		fseek(fp, -size, SEEK_CUR);
					count--;
					break;
			default:break;
			}
		count++;
	}
	if(count == MAXBKS)
	{
		fputs("The book.dat file is full.", stderr);
		exit(2);
	}
	puts("Now enter the title.");
	puts("Press [Enter] at the start of a line to stop.");
	getchar();
	while(count < MAXBKS && gets(library[count].title) != NULL
			&& library[count].title[0] != '\0')
	{
		puts("Now enter the author.");
		gets(library[count].author);
		puts("Now enter the value.");
		scanf("%f", &library[count++].value);
		while(getchar() != '\n')
			continue;
		if(count < MAXBKS)
			puts("Enter the next title.");
	}
	rewind(fp);
	if(count > 0)
	{
		puts("Here is the list of your books: ");
		for(index = 0; index < count; index++){
			if(library[index].value == -1)
			{
			for(int i = index; i < count - 1; i++)
				library[i] = library[i + 1];
			count--;
			continue;
			}
			printf("%s by %s: $%.2f\n", library[index].title,
					library[index].author, library[index].value);
		}
		printf("count = %d\n", count);
		fwrite(&library[0], size, count, fp);
	}
	else
		puts("No books? Too bad.\n");

	puts("Bye!\n");
	fclose(fp);

	return 0;
}
