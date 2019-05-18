#include<stdio.h>
#include<stdlib.h>
int * make_array(int elem, int val);
void show_array(const int ar[], int n);
int main(void)
{
	int *pa;
	int size;
	int value;

	printf("enter the number of elements:");
	while(!scanf("%d", &size))
		continue;
	while(size > 0)
	{
		printf("Enter the initialization value: ");
		while(!scanf("%d", &value))
			continue;
		pa = make_array(size, value);
		if(pa)
		{
			show_array(pa, size);
			free(pa);
		}
		printf("Enter the number of elemetns(<1 to quit): ");
		scanf("%d", &size);
	}
	printf("Done.\n");
	return 0;
}

int *make_array(int size, int value)
{
	int * ptr;
	
	ptr = (int*)malloc(size * sizeof(int));
	for(int i = 0; i < size; i++)
		ptr[i] = value;

	return ptr;
}

void show_array(const int ar[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ",ar[i]);
		if((i + 1) % 8 == 0)
			printf("\n");
	}
	printf("\n");
	return;
}
