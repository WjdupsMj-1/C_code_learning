#include<stdio.h>
#include<string.h>
int isPrime(int);

int main(void)
{
	int number;
	int n, i;
	int length;
	int class[255] = {};
	printf("Enter a number:\n");
	while(scanf("%d",&number) == 1){
		if(number == 1){
			class[0] = 1;
			length = 1;
			goto A;
		}
		else if(number == 2){
			class[0] = 1;
			class[1] = 2;
			length = 2;
			goto A;
		}
		else
		for (n = 2, i = 2; n <= number; n++){
			if(isPrime(n)){
				class[i] = n;
				i++;
			}
		}
		class[0] = 1;
		class[1] = 2;
		length = i;
A:		printf("the Prime Class is:\n");
		for(i = 0; i < length; i++){
		printf("%5d",class[i]);
		if((i + 1) % 6 == 0)
			printf("\n");
		}
		printf("\nEnter next number:\n");
	}
	return 0;
}

int isPrime(int number)
{
	int div;
	int isPrime = 0;
	
	for(div = 2; (div * div) <= number; div++)
	{
		if (number % div == 0)
		{
			isPrime = 0;
			return isPrime;
		}
		isPrime = 1;
	}
		
	return isPrime;
}
