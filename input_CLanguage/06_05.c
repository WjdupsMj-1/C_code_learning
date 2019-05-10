#include<stdio.h>

int main(void)
{
	int up, down;
	int de;
	int i;
	do{
		printf("please enter a up grade for the format:\n");
		scanf("%d", &up);
		printf("please enter a down grade for the format:\n");
		scanf("%d", &down);
		de = up - down;
		if(de >= 0){
		for (i = 0; i <= de; i++)
			printf("%d's cube is %d, squre is %d.\n"
			, down + i, (down + i) * (down + i), (down + i) * (down + i) * (down + i));
		printf("(enter 0 to quit)\n");
		scanf("%d", &up);
		}
		else
		continue;
	}while(up != 0);
	printf("Bye!\n");
	return 0;
}
