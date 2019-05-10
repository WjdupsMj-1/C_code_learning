#include<stdio.h>
int fibonacci(int n);

int main(void)
{
	int n = 0;
	int fib = 0;
	char ch = 0;
	
	while(1){
	printf("please enter a number 0 < n < 20:\n");
	scanf("%d", &n);
	if (n > 20 || n < 1)
	continue;
	fib = fibonacci(n);
	printf("%d's fibonacci is: %d\nenter q to quit\n",n,fib);
	scanf("%c", &ch);
	if (ch == 'q' || ch == 'Q')
	break;
	}
	return 0;
}

int fibonacci(int n)
{
	int fibo[64] = {1, 1, };
	int i;
	
	if ((n == 1)||(n == 2))
	return fibo[n - 1];
	else if(n > 2){
	for (i = 2; i < n; i++)
	fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	return fibo[n - 1];
	
}
