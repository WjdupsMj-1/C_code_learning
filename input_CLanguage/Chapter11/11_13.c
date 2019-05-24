#include<stdio.h>
#include<ctype.h>
#include<string.h>
double inde(int in, double nu);
int main(int argc, char* argv[])
{
	double number, result = 0;
	int index, i, j;
	int no1 = 0, no2 = 0, no3 = 0;
	char ch;

	if(argc != 3){
		printf("Wrong enter items!\n");
		return 0;
	}
	for(i = 0; i < strlen(argv[1]); i++){
		ch = argv[1][i];
		if(isdigit(ch))
			no1++;
		else if(ch == '.'){
			no2++;
			no3 = no1;
		}
	}
	if(no2 > 1 || no2 + no1 != strlen(argv[1])){
		printf("Wrong enter double.\n");
		return 0;
	}
	for(i = 0, number = 0; i < strlen(argv[2]); i++){
		if(isdigit(argv[2][i]))
			number++;
	}
	if(number != strlen(argv[2])){
		printf("Wrong enter int.\n");
		return 0;
	}
	for(i = no1, number = 0, j = 0; i > 0; i--, j++)
		number += inde(i - 1, 10.) * (argv[1][j] - '0');
	if(no3 > 0){
	for(i = no3, number = 0, j = 0; i > 0; i--, j++)
		number += inde(i - 1, 10.) * (argv[1][j] - '0');
	for(i = 1, j = 0; i <= no1 - no3 ; i++, j++)
		number += inde(-i, 10.) * (argv[1][no3 + 1] - '0');}
		printf("number = %5f, no1 = %d \n", number, no1);
	for(i = strlen(argv[2]), j = 0; i > 0; i--, j++)
		index += inde(i - 1, 10) * (argv[2][j] - '0');
		printf("index = %d, no2 = %d, no3 = %d \n", index, no2, no3);
	result = inde(index, number);
	printf("\nthe result is: %5.2f \n", result);

	//puts(argv[1]);
	//puts(argv[2]);
	return 0;
}

double inde(int in, double nu)
{
	double re = 1;
	if(in > 0 )
		for(int i = 0; i < in; i++)
			re *= nu;
	else if(in == 0)
		re = 1;
	else if(in < 0)
		for(int i = in; i < 0; i++)
			re /= nu;
	return re;
}
