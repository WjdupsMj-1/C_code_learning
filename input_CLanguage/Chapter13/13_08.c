#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define LENS 80

int COUNT(char index, FILE *file);
int main(int argc, char * argv[])
{
	int i;
	FILE *file[LENS];
	int count[LENS] = {};
	char index;

	if(argc < 2){
		fprintf(stderr,"usage name: %s\n", argv[0]);
		exit(1);
	}
//	while(argv[1] == NULL || sizeof(argv[1]) > 2 * sizeof(char[1])){
//		printf("Enter another char to search.\n");
//		fgets(argv[1], LENS, stdin);
//	}
	index = argv[1][0];
	if(argc == 2){
		if((file[0] = fopen("testtest", "r")) == NULL){
			fprintf(stderr, "can't open %s file.\n", "testtest");
			exit(1);
		}
		count[0] = COUNT(index, file[0]);
		if(fclose(file[0]) != 0){
		fprintf(stderr, "can't close %s file.\n", "testtest");
		}
		printf("there are %d %c in \"%s\".\n", count[0], index, "\"texttext\"");
	}
	else if(argc > 2)
		for(i = 2; i < argc; i++){
			if((file[i - 2] = fopen(argv[i], "r")) == NULL){
				fprintf(stderr, "can't open %s file.\n", argv[i]);
				count[i - 2] = - 1;
				continue;
			}
			count[i - 2] = COUNT(index, file[i - 2]);
			printf("\"%s\" has %d %c inside.\n", argv[i], count[i - 2], index);
			if(fclose(file[i - 2]) != 0)
				printf("\"%s\" can't be close successful.\n", argv[i]);
		}
	
	return 0;
}

int COUNT(char index, FILE *file)
{
	int cou = 0;
	char ch;

	while((ch = getc(file)) != EOF){
		if(ch == index)
			cou++;
	}

	return cou;
}
