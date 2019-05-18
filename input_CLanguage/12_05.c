#include<stdio.h>
static unsigned long int seed = 1;
unsigned long int rank1(void);
void count(int, int *);
void transfer(int *);

int main(void)
{
	int	item[20] = {};
	int * t = item;

	printf("please enter a seed: ");
	scanf("%ld", &seed);
	for(int i = 0; i < 20; i++)
	item[i] = rank1() % 10 + 1;
	
	transfer(t);

	for(int i = 0; i < 20; i++)
	printf("%d appears.\n",item[i]);
	return 0;
}

unsigned long int rank1(void)
{
	extern unsigned long int seed;
	seed = seed * 961313 + 12344541;

	return(unsigned long int)(seed/65336) % 378;
}
void transfer(int *t)
{
	int i, j;
	int term;
	for(i = 0; i < 20; i++)
		for(j = i + 1; j < 20; j++)
			if(t[i] < t[j]){
				term = t[i];
				t[i] = t[j];
				t[j] = t[i];
			}
	return;
}
