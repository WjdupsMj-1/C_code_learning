#include<stdio.h>
#include<stdlib.h>
static unsigned long seed = 6;
static int roll_count = 0;
int rollem(int sides);
int roll_n_dice(int dice, int sides);

int main(void)
{
	int dice, roll;
	int sides, sits;
	int *ptr;
	roll_count = 0;
	printf("Enter the number of sets: 0 to stop.\n");
	while(scanf("%d", &sits) == 1 && sits > 0)
	{
		printf("How many sides and dice?\n");
		while(scanf("%d %d", &sides, &dice) != 2){
			printf("Enter again.\n");
			getchar();
			continue;
		}
		ptr = (int*)calloc(sits, sizeof(int));
		for(int i = 0; i < sits; i++)
			ptr[i] = roll_n_dice(dice, sides);

		printf("here are %d sets of %d %d-sided throws.\n",
			sits, dice, sides);
		for(int i = 0; i < sits; i++){
		printf("%5d", ptr[i]);
		if(i % 10 == 0 && i != 0)
		printf("\n");
		}
		free(ptr);
		printf("\nHow many sets? Enter 0 to stop.\n");
	}
	printf("The rolem() function was called %d times.\n",
		roll_count);
	printf("GOOD FORTUNE TO YOU!\n");
	return 0;
}

int roll_n_dice(int dice, int sides)
{
	int d;
	int total = 0;
	if(sides < 2)
	{
		printf("Need at least 2 sides.\n");
		return -2;
	}
	if(dice < 1)
	{
		printf("Need at least 1 die.\n");
		return -1;
	}
	for(d = 0; d < dice; d++)
		total += rollem(sides);
	
	return total;
}

int rollem(int sides)
{
	int result = 0;
	extern int roll_count;
	seed = seed * 123456 / 352 + 654321;
	result = (unsigned int)seed % (unsigned int)sides + 1;
	++roll_count;
	return result;
}
