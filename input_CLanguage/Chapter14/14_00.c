#include<stdio.h>
typedef struct name{
	char first[20];
	char last[20];
}NAME;
typedef struct bem{
	int limbs;
	struct name title;
	char type[30];
}BEM;
void print (struct bem *);

int main(void)
{
struct bem deb = {
	6,
	{"Berbnazel", "Gwolkapwolf"},
	"Arcturan"
};

	struct bem * pb;
	pb = &deb;
//	printf("%s %s is a %d-limbed %s.\n",
//			pd->title.first, pb->title.last, pb->limbs, pb->type);

	print(pb);
	return 0;
}

void print(struct bem * ptr)
{
	printf("%s %s is a %d-limbed %s.\n",
			ptr->title.first, ptr->title.last, ptr->limbs, ptr->type);
	return;
}
