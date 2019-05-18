#include<stdio.h>
static int times;
void reviel(void);

int main(void)
{
	int time, i;

	for (i = 0; i < 10; i++)
	{
		printf("reviel has been used for once.\n");
		reviel();
		time = times;
		printf("reviels has been used for %d times till now.\n", time);
	}
	times = 0;
	return 0;
}

void reviel(void)
{
	times++;
	return;
}
