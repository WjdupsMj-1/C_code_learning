#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 20
struct fname{
	char firstname[MAX];
	char midname[MAX];
	char lastname[MAX];
};
struct class{
	int SI_number;
	struct fname name;
};
void function1(const struct class ABC[5]);
//void function2(const struct class (*ABC)[5]);

int main(void)
{
	struct class ABC[5] = {
		{302039823, {"Eribble", "Narvel", "Qlossie"}},
		{123459823, {"Dribble", "Marvel", "Ilossie"}},
		{543219823, {"Cribble", "Oarvel", "Hlossie"}},
		{302319823, {"Bribble", "Parvel", "Glossie"}},
		{122039823, {"Aribble", "\0", "Flossie"}},
	};
	int i = 0;
	/*
	for(i = 0; i < 5; i++){
		if(ABC[i].name.midname[0] != '\0')
		printf("%s, %s %c. - %d\n", ABC[i].name.firstname,
				ABC[i].name.lastname, toupper(ABC[i].name.midname[0]),
				ABC[i].SI_number);
		else
		printf("%s, %s    - %d\n", ABC[i].name.firstname,
				ABC[i].name.lastname, ABC[i].SI_number);
	}
*/
//	struct class (*ptr)[5];
//	ptr = &ABC;
	function1(ABC);
//	function2(ptr);
	return 0;

}

void function1(const struct class ABC[5])
{
	for(int i = 0; i < 5; i++){
		if(ABC[i].name.midname[0] != '\0')
		printf("%s, %s %c. - %d\n", ABC[i].name.firstname,
				ABC[i].name.lastname, toupper(ABC[i].name.midname[0]),
				ABC[i].SI_number);
		else
		printf("%s, %s    - %d\n", ABC[i].name.firstname,
				ABC[i].name.lastname, ABC[i].SI_number);
	}
	return;
}
/*void function2(const struct class (*ABC)[5])
{
	for(int i = 0; i < 5; i++){
		if(ABC[i]->name.midname[0] != '\0')
		printf("%s, %s %c. - %d\n", ABC[i]->name.firstname,
				ABC[i]->name.lastname, toupper(ABC[i]->name.midname[0]),
				ABC[i]->SI_number);
		else
		printf("%s, %s    - %d\n", ABC[i]->name.firstname,
				ABC[i]->name.lastname, ABC[i]->SI_number);
	}
	return;
}*/
