#include<stdio.h>
void sum_squ(int, int);

int main(void)
{
	int up, down;
	int de;
	
	printf("Enter lower and upper integer limits:\n");
	scanf("%d%d", &down, &up);
	while(1){
		de = up - down;
		if(de <= 0)
		break;
		sum_squ(up, down);
		printf("Enter next set of limits:\n");
		scanf("%d%d", &down, &up);
	}
	printf("Done\n");
	return 0;
}

void sum_squ(int up, int down)
{
	int d = up - down;
	int sum = 0;
	int i;
	for (i = 0; i <= d; i++)
		sum += (down + i) * (down + i);
	printf("The sum of the squares from %d to %d is %d\n",
		down * down, up * up, sum);
	return;
}
