#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define CSIZE 4
#define MAX 20
static struct wname{
	char fname[MAX];
	char lname[MAX];
};
static struct student{
	struct wname name;
	float grade1;
	float grade2;
	float grade3;
	float avr;
};
void D (struct student list[CSIZE]);
void E (struct student list[CSIZE]);
void F (struct student list[CSIZE]);
void G (struct student list[CSIZE]);

int main(void)
{
	struct student LIST[CSIZE] = {
		{{"Victor", "Li"}, },
		{{"Lily", "Popova"}, },
		{{"Hasan", "Gadjali"}, },
		{{"Alan", "Hou"}, },
	};

	D(LIST);
	E(LIST);
	F(LIST);
	G(LIST);

	return 0;
}

void D (struct student list[CSIZE])
{
	int i = 0;
	while(i < CSIZE){
	printf("Please enter grade1 for %s.\n", list[i].name.fname);
	scanf("%f", &list[i].grade1);
	printf("Please enter grade2 for %s.\n", list[i].name.fname);
	scanf("%f", &list[i].grade2);
	printf("Please enter grade3 for %s.\n", list[i].name.fname);
	scanf("%f", &list[i].grade3);
	i++;
	}

	return;
}

void E (struct student list[CSIZE])
{
	int i = 0;
	float avr = 0;
	struct student *p;
	while(i++ < CSIZE){
		p = &list[i - 1];
		p->avr = (p->grade1 + p->grade2 + p->grade3) / 3;
	}

	return;
}

void F (struct student list[CSIZE])
{
	for(int i = 0; i < CSIZE; i++){
		printf("%8s %5s's grade is: %5.2f %5.2f %5.2f\n",
				list[i].name.fname, list[i].name.fname,
				list[i].grade1, list[i].grade2, list[i].grade3);
		printf("His/Her average is %5.2f.\n", list[i].avr);
	}
	return;
}

void G (struct student list[CSIZE])
{
	int i, j;
	float sum[3] = {};
	float avr[3] = {};
		for(j = 0; j < CSIZE; j++){
			sum[0] += list[j].grade1;
			sum[1] += list[j].grade2;
			sum[2] += list[j].grade3;
	}
		for(j = 0; j < 3; j++){
			avr[j] = sum[j] / CSIZE;
			printf("class average for grade%d is %5.2f\n", j + 1, avr[j]);
		}
	return;
}
