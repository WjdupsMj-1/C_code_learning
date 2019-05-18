#include<stdio.h>
static unsigned long int seed = 1;
unsigned long int rank1(void);
void count(int result, int *);

int main(void)
{
	int result = 0;
	int	time[10] = {};
	int * t = time;
	int sum = 0;

	printf("please enter a seed: ");
	scanf("%ld", &seed);
	for(int i = 0; i < 100000; i++)
	{
	result = rank1() % 10 + 1;
	count(result, t);	
	}

	for(int i = 0; i < 10; i++){
	printf("%d has appeared %d times.\n", i + 1, time[i]);
	sum += time[i];
	}
	printf("total %d times counted.\n", sum);
	return 0;
}

unsigned long int rank1(void)
{
	extern unsigned long int seed;
	seed = seed * 961313 + 12344541;

	return(unsigned long int)(seed/65336) % 378;
}

void count(int result, int * t)
{
	int i;

	for(i = 1; i < 11; i++){
		if(result == i)
			t[i - 1]++;
	}
	return;
}
